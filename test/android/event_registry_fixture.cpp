#include "ll/core/event/EventRegistry.h"
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <limits>
#include <mutex>
#include <thread>
#include <vector>

namespace ll::android {
struct EventRegistryFixture {
    static void nearOverflow(EventRegistry& value) { value.nextToken = std::numeric_limits<uint64_t>::max() - 1; }
};
} // namespace ll::android
using namespace ll::android;
namespace {
#define CHECK(expr)                                                                                                    \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "event fixture failed %d: %s\n", __LINE__, #expr);                                    \
            return false;                                                                                              \
        }                                                                                                              \
    } while (false)
struct Listener {
    EventRegistry*    registry{};
    std::vector<int>* order{};
    int               number{};
    uint64_t          cancel{};
    bool              cancelled{}, correctOwner{};
    ModOwner*         owner{};
};
void ordered(uint32_t, void const*, void* pointer) noexcept {
    auto& listener        = *static_cast<Listener*>(pointer);
    listener.correctOwner = currentOwner().owner == listener.owner && currentOwner().phase == ModPhase::Callback;
    listener.order->push_back(listener.number);
    if (listener.cancel) listener.cancelled = listener.registry->unsubscribe(listener.cancel);
}
void noop(uint32_t, void const*, void*) noexcept {}

bool basic() {
    EventRegistry registry;
    ModOwner      owner{1}, other{2};
    CHECK(registry.open() && !registry.open());
    CHECK(registry.subscribe(1, noop, nullptr) == 0);
    std::vector<int> order;
    order.reserve(8);
    Listener one{&registry, &order, 1, 0, false, false, &owner};
    Listener two{&registry, &order, 2, 0, false, false, &owner};
    uint64_t first{}, second{};
    {
        OwnerScope scope(owner, ModPhase::Load);
        CHECK(registry.subscribe(1, noop, nullptr) == 0);
    }
    {
        OwnerScope scope(owner, ModPhase::Enable);
        CHECK(registry.subscribe(0, noop, nullptr) == 0 && registry.subscribe(1, nullptr, nullptr) == 0);
        first  = registry.subscribe(1, ordered, &one);
        second = registry.subscribe(1, ordered, &two);
        CHECK(first && second > first);
    }
    registry.publish(1, nullptr);
    CHECK(order.empty()); // owner's enable callback has not succeeded yet
    CHECK(registry.activateOwner(owner));
    registry.publish(2, nullptr);
    CHECK(order.empty());
    registry.publish(1, nullptr);
    CHECK((order == std::vector<int>{1, 2}) && one.correctOwner && two.correctOwner);
    order.clear();
    one.cancel = second;
    registry.publish(1, nullptr);
    CHECK((order == std::vector<int>{1}) && one.cancelled);
    CHECK(!registry.unsubscribe(second)); // cancelled snapshot entry never starts
    one.cancel    = first;
    one.cancelled = false;
    registry.publish(1, nullptr);
    CHECK(one.cancelled && !registry.unsubscribe(first));
    {
        OwnerScope scope(other, ModPhase::Enable);
        CHECK(registry.subscribe(2, noop, nullptr) != 0);
    }
    CHECK(registry.removeOwner(other)); // failed enable's staged subscription removed
    CHECK(registry.closeAndDrain() && registry.clean());
    CHECK(registry.open());
    EventRegistryFixture::nearOverflow(registry);
    ModOwner overflowOwner{3};
    {
        OwnerScope scope(overflowOwner, ModPhase::Enable);
        CHECK(registry.subscribe(1, noop, nullptr) == std::numeric_limits<uint64_t>::max() - 1);
        CHECK(registry.subscribe(2, noop, nullptr) == std::numeric_limits<uint64_t>::max());
        CHECK(registry.subscribe(1, noop, nullptr) == 0);
    }
    CHECK(registry.closeAndDrain() && registry.removeOwner(overflowOwner) && registry.clean());
    return true;
}

struct Blocking {
    std::mutex              mutex;
    std::condition_variable changed;
    bool                    entered{}, release{};
    std::atomic<unsigned>   calls{};
};
void blocking(uint32_t, void const*, void* pointer) noexcept {
    auto&            value = *static_cast<Blocking*>(pointer);
    std::unique_lock lock(value.mutex);
    ++value.calls;
    value.entered = true;
    value.changed.notify_all();
    value.changed.wait(lock, [&] { return value.release; });
}
bool cancellation(bool timeout) {
    EventRegistry registry;
    ModOwner      owner{5};
    Blocking      blocked;
    registry.open();
    uint64_t token;
    {
        OwnerScope scope(owner, ModPhase::Enable);
        token = registry.subscribe(1, blocking, &blocked);
    }
    CHECK(token && registry.activateOwner(owner));
    std::thread publishing([&] { registry.publish(1, nullptr); });
    bool        arrived;
    {
        std::unique_lock lock(blocked.mutex);
        arrived = blocked.changed.wait_for(lock, std::chrono::seconds(1), [&] { return blocked.entered; });
    }
    std::atomic<int> result{-1};
    std::thread      cancelling([&] { result = registry.unsubscribe(token) ? 1 : 0; });
    if (timeout) cancelling.join();
    else {
        auto deadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(30);
        while (result == -1 && std::chrono::steady_clock::now() < deadline) std::this_thread::yield();
    }
    bool retained = arrived && registry.stats().inFlight == 1 && (timeout ? result == 0 : result == -1);
    registry.publish(2, nullptr); // independent event remains nonblocking
    {
        std::lock_guard lock(blocked.mutex);
        blocked.release = true;
    }
    blocked.changed.notify_all();
    publishing.join();
    if (!timeout) cancelling.join();
    CHECK(retained && result == (timeout ? 0 : 1) && blocked.calls == 1);
    CHECK(!registry.unsubscribe(token));
    CHECK(registry.removeOwner(owner) && registry.closeAndDrain() && registry.clean());
    return true;
}

struct Crossing {
    explicit Crossing(EventRegistry& value) : registry(&value) {}
    EventRegistry*          registry;
    std::mutex              mutex;
    std::condition_variable changed;
    uint64_t                tokens[2]{};
    unsigned                entered{}, attempted{};
    bool                    results[2]{true, true};
};
void crossing(uint32_t kind, void const*, void* pointer) noexcept {
    auto& value = *static_cast<Crossing*>(pointer);
    {
        std::unique_lock lock(value.mutex);
        ++value.entered;
        value.changed.notify_all();
        if (!value.changed.wait_for(lock, std::chrono::seconds(1), [&] { return value.entered == 2; })) return;
    }
    value.results[kind - 1] = value.registry->unsubscribe(value.tokens[2 - kind]);
    std::unique_lock lock(value.mutex);
    ++value.attempted;
    value.changed.notify_all();
    value.changed.wait_for(lock, std::chrono::seconds(1), [&] { return value.attempted == 2; });
}
bool crossCancellation() {
    EventRegistry registry;
    ModOwner      owner{8};
    Crossing      value{registry};
    registry.open();
    {
        OwnerScope scope(owner, ModPhase::Enable);
        value.tokens[0] = registry.subscribe(1, crossing, &value);
        value.tokens[1] = registry.subscribe(2, crossing, &value);
    }
    CHECK(registry.activateOwner(owner));
    std::thread first([&] { registry.publish(1, nullptr); });
    std::thread second([&] { registry.publish(2, nullptr); });
    first.join();
    second.join();
    CHECK(value.attempted == 2 && !value.results[0] && !value.results[1]);
    CHECK(registry.closeAndDrain() && registry.removeOwner(owner) && registry.clean());
    return true;
}
} // namespace
int main() {
    if (!basic() || !cancellation(false) || !cancellation(true) || !crossCancellation()) return 1;
    std::puts(
        "event registry passed: staged owners, event/order isolation, snapshot/self cancellation, external drain, "
        "timeout, overflow and cross-callback refusal"
    );
}
