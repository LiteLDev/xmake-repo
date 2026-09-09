#include "ll/core/android/HookTransaction.h"
#include <bit>

namespace ll::android {
bool HookTransaction::clean() const noexcept {
    for (auto const& slot : slots)
        if (slot.installed || slot.origin) return false;
    return true;
}
bool HookTransaction::install(RuntimeTargets targets, RuntimeTargets detours, HookQuiescence const& scope) noexcept {
    if (!scope.held() || !hook || !unhook || !clean()) return false;
    std::array target{std::bit_cast<pl::FuncPtr>(targets.actor), std::bit_cast<pl::FuncPtr>(targets.client)};
    std::array detour{std::bit_cast<pl::FuncPtr>(detours.actor), std::bit_cast<pl::FuncPtr>(detours.client)};
    if (!target[0] || !target[1] || target[0] == target[1] || !detour[0] || !detour[1]) return false;
    for (auto entry : detour)
        if (entry == target[0] || entry == target[1]) return false;
    for (size_t i = 0; i < slots.size(); ++i) {
        auto& slot = slots[i];
        slot       = {target[i], detour[i], nullptr, false};
        int result = hook(slot.target, slot.detour, &slot.origin, pl::PriorityNormal);
        // A zero result owns a hook even if its origin is unexpectedly null.
        // A failing backend that wrote an origin is conservatively retained too.
        slot.installed = result == 0 || slot.origin != nullptr;
        if (result != 0 || !slot.origin) {
            remove(scope);
            return false;
        }
    }
    return true;
}
bool HookTransaction::remove(HookQuiescence const& scope) noexcept {
    if (!scope.held() || !unhook) return false;
    bool result = true;
    for (auto slot = slots.rbegin(); slot != slots.rend(); ++slot) {
        if (!slot->installed) continue;
        if (!unhook(slot->target, slot->detour)) {
            result = false;
            continue;
        }
        // Public PL has relinquished this slot; it is now safe to clear it.
        *slot = {};
    }
    return result && clean();
}
ActorNormalTick HookTransaction::actorOrigin() const noexcept {
    return std::bit_cast<ActorNormalTick>(slots[0].origin);
}
ClientLocalPlayer HookTransaction::clientOrigin() const noexcept {
    return std::bit_cast<ClientLocalPlayer>(slots[1].origin);
}
} // namespace ll::android
