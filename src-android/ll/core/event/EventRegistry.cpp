#include "ll/core/event/EventRegistry.h"
#include <chrono>
#include <cstdlib>
#include <limits>
#include <memory>
#include <new>

namespace ll::android {
EventRegistry::~EventRegistry() {
    // Destruction with callbacks in flight is a caller contract failure, never
    // a place to silently free callback/userdata storage.
    if (inFlight || snapshots) std::abort();
    while (first) unlink(*first);
}
bool EventRegistry::open() noexcept {
    std::lock_guard lock(mutex);
    if (first || inFlight || snapshots || publishing.load(std::memory_order_relaxed)) return false;
    publishing.store(true, std::memory_order_release);
    return true;
}
bool EventRegistry::activateOwner(ModOwner& owner) noexcept {
    std::lock_guard lock(mutex);
    if (!owner.id || owner.retiring || !publishing.load(std::memory_order_relaxed)) return false;
    owner.enabled = true;
    for (auto* slot = first; slot; slot = slot->next) {
        if (slot->owner == &owner && slot->active && !slot->counted) {
            slot->counted = true;
            listeners[slot->kind - 1].fetch_add(1, std::memory_order_release);
        }
    }
    return true;
}
uint64_t EventRegistry::subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept {
    if (kind < 1 || kind > 2 || !callback) return 0;
    auto context = currentOwner();
    if (!context.owner || (context.phase != ModPhase::Enable && context.phase != ModPhase::Callback)) return 0;
    std::lock_guard lock(mutex);
    auto&           owner = *context.owner;
    if (!owner.id || owner.retiring || !publishing.load(std::memory_order_relaxed)
        || (context.phase == ModPhase::Callback && !owner.enabled) || tokensExhausted)
        return 0;
    auto* slot = new (std::nothrow) Slot;
    if (!slot) return 0;
    slot->owner = &owner;
    slot->token = nextToken;
    if (nextToken == std::numeric_limits<uint64_t>::max()) tokensExhausted = true;
    else ++nextToken;
    slot->kind     = kind;
    slot->callback = callback;
    slot->userData = userData;
    slot->counted  = owner.enabled;
    slot->previous = last;
    if (last) last->next = slot;
    else first = slot;
    last = slot;
    if (slot->counted) listeners[kind - 1].fetch_add(1, std::memory_order_release);
    return slot->token;
}
EventRegistry::Slot* EventRegistry::find(uint64_t token) const noexcept {
    for (auto* slot = first; slot; slot = slot->next)
        if (slot->token == token) return slot;
    return nullptr;
}
void EventRegistry::deactivate(Slot& slot) noexcept {
    slot.active = false;
    if (slot.counted) {
        slot.counted = false;
        listeners[slot.kind - 1].fetch_sub(1, std::memory_order_release);
    }
}
void EventRegistry::release(Slot* slot) noexcept {
    if (--slot->references == 0) delete slot;
}
void EventRegistry::unlink(Slot& slot) noexcept {
    if (slot.previous) slot.previous->next = slot.next;
    else first = slot.next;
    if (slot.next) slot.next->previous = slot.previous;
    else last = slot.previous;
    release(&slot);
}
void EventRegistry::reclaim() noexcept {
    for (auto* slot = first; slot;) {
        auto* next = slot->next;
        if (!slot->active && !slot->inFlight) unlink(*slot);
        slot = next;
    }
}
bool EventRegistry::unsubscribe(uint64_t token) noexcept {
    if (!token) return false;
    std::unique_lock lock(mutex);
    auto*            slot = find(token);
    if (!slot || !slot->active) return false;
    auto context = currentOwner();
    bool self    = context.callbackToken == token && context.callbackSource == this;
    if (context.callbackToken && !self && slot->inFlight) return false;
    deactivate(*slot);
    if (self) return true;
    ++slot->references;
    bool clean = drained.wait_for(lock, std::chrono::seconds(2), [&] { return slot->inFlight == 0; });
    reclaim();
    release(slot);
    return clean;
}
void EventRegistry::publish(uint32_t kind, void const* payload) noexcept {
    if (kind < 1 || kind > 2 || !publishing.load(std::memory_order_acquire)
        || !listeners[kind - 1].load(std::memory_order_acquire))
        return;
    std::unique_ptr<Slot*[]> snapshot;
    size_t                   count{};
    {
        std::lock_guard lock(mutex);
        if (!publishing.load(std::memory_order_relaxed)) return;
        size_t capacity = listeners[kind - 1].load(std::memory_order_relaxed);
        if (!capacity) return;
        snapshot.reset(new (std::nothrow) Slot*[capacity]);
        if (!snapshot) return;
        ++snapshots;
        for (auto* slot = first; slot; slot = slot->next) {
            if (slot->kind == kind && slot->active && slot->counted) {
                ++slot->references;
                snapshot[count++] = slot;
            }
        }
    }
    for (size_t i = 0; i < count; ++i) {
        auto* slot = snapshot[i];
        bool  call{};
        {
            std::lock_guard lock(mutex);
            // Test activity before dereferencing the borrowed owner: a retired
            // snapshot may outlive the owner's safely completed unload.
            call = publishing.load(std::memory_order_relaxed) && slot->active && slot->owner->enabled
                && !slot->owner->retiring;
            if (call) {
                ++slot->inFlight;
                ++slot->owner->inFlight;
                ++inFlight;
            }
        }
        if (call) {
            {
                OwnerScope owner(*slot->owner, ModPhase::Callback, slot->token, this);
                slot->callback(kind, payload, slot->userData);
            }
            std::lock_guard lock(mutex);
            --slot->inFlight;
            --slot->owner->inFlight;
            --inFlight;
            reclaim();
            drained.notify_all();
        }
        std::lock_guard lock(mutex);
        release(slot);
    }
    std::lock_guard lock(mutex);
    --snapshots;
    drained.notify_all();
}
bool EventRegistry::removeOwner(ModOwner& owner) noexcept {
    if (currentOwner().callbackToken) return false;
    std::unique_lock lock(mutex);
    owner.retiring = true;
    owner.enabled  = false;
    for (auto* slot = first; slot; slot = slot->next)
        if (slot->owner == &owner) deactivate(*slot);
    bool clean = drained.wait_for(lock, std::chrono::seconds(2), [&] { return owner.inFlight == 0; });
    reclaim();
    return clean;
}
bool EventRegistry::closeAndDrain() noexcept {
    if (currentOwner().callbackToken) return false;
    std::unique_lock lock(mutex);
    publishing.store(false, std::memory_order_release);
    // Keep tokens active for the owner's subsequent disable callback. Publication
    // is closed, and no snapshot/callback survives the successful drain. The Mod
    // may unsubscribe normally; removeOwner cleans up any forgotten tokens.
    bool clean = drained.wait_for(lock, std::chrono::seconds(2), [&] { return inFlight == 0 && snapshots == 0; });
    reclaim();
    return clean;
}
EventRegistry::Stats EventRegistry::stats() const noexcept {
    std::lock_guard lock(mutex);
    Stats           result{0, inFlight, snapshots, publishing.load(std::memory_order_relaxed)};
    for (auto* slot = first; slot; slot = slot->next) ++result.slots;
    return result;
}
bool EventRegistry::clean() const noexcept {
    auto value = stats();
    return !value.slots && !value.inFlight && !value.snapshots && !value.publishing;
}
} // namespace ll::android
