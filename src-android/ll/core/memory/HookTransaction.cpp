#include "ll/core/memory/HookTransaction.h"
#include <bit>

namespace ll::android {
bool HookTransaction::clean() const noexcept {
    if (uncertainOwnership) return false;
    for (auto const& slot : slots)
        if (slot.handle || slot.origin) return false;
    return true;
}
bool HookTransaction::configure(PLGuardedHookApiV1 const* value) noexcept {
    if (!clean() || !value || value->size != sizeof(*value) || value->abiVersion != 1 || !value->install
        || !value->retire || !value->query)
        return false;
    api = value;
    return true;
}
bool HookTransaction::install(RuntimeTargets targets, RuntimeTargets detours) noexcept {
    if (!api || !clean()) return false;
    std::array target{std::bit_cast<void*>(targets.actor), std::bit_cast<void*>(targets.client)};
    std::array detour{std::bit_cast<void*>(detours.actor), std::bit_cast<void*>(detours.client)};
    if (!target[0] || !target[1] || target[0] == target[1] || !detour[0] || !detour[1]) return false;
    for (auto pointer : detour)
        if (pointer == target[0] || pointer == target[1]) return false;
    for (size_t i = 0; i < slots.size(); ++i) {
        PLGuardedHookSpecV1
            spec{sizeof(spec), 1, static_cast<uint32_t>(i + 1), 200, target[i], detour[i], &slots[i].origin};
        error = api->install(&spec, &slots[i].handle);
        if (error != PLGuardedHook_Ok || !slots[i].handle || !slots[i].origin) {
            if (error == PLGuardedHook_BackendFailure && !slots[i].handle) {
                PLGuardedHookStateV1 state{sizeof(state), 1, 0, 0, 0, 0, 0};
                // Some provider failures retain a reservation without a usable
                // handle. Only an explicit empty result clears uncertainty.
                uncertainOwnership = api->query(0, &state) != 0 || state.ownerBindings || state.inFlight;
            }
            remove();
            return false;
        }
    }
    return true;
}
bool HookTransaction::remove() noexcept {
    if (!api) return clean();
    bool success = !uncertainOwnership;
    for (auto slot = slots.rbegin(); slot != slots.rend(); ++slot) {
        if (!slot->handle) continue;
        auto result = api->retire(slot->handle);
        if (result != PLGuardedHook_Ok) {
            error   = result;
            success = false;
            continue;
        }
        slot->handle = 0;
        if (slot->origin) {
            uncertainOwnership = true;
            success            = false;
        }
    }
    return success && clean();
}
ActorNormalTick HookTransaction::actorOrigin() const noexcept {
    return std::bit_cast<ActorNormalTick>(slots[0].origin);
}
ClientLocalPlayer HookTransaction::clientOrigin() const noexcept {
    return std::bit_cast<ClientLocalPlayer>(slots[1].origin);
}
} // namespace ll::android
