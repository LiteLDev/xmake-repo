#pragma once

#include "ll/core/android/RuntimeSymbols.h"
#include "pl/Hook.h"
#include <array>

namespace ll::android {
// A scope must prevent all target entry and already have drained every caller.
// It remains held throughout install/remove, including failure rollback. Neither
// an in-flight count of zero nor a successful pl_unhook establishes this scope.
// No implementation for Minecraft exists under the frozen PL/Launcher contract.
class HookQuiescence {
public:
    virtual ~HookQuiescence()          = default;
    virtual bool held() const noexcept = 0;
};

class HookTransaction final {
public:
    HookTransaction(decltype(&pl::pl_hook) hook, decltype(&pl::pl_unhook) unhook) : hook(hook), unhook(unhook) {}
    HookTransaction(HookTransaction const&)            = delete;
    HookTransaction& operator=(HookTransaction const&) = delete;
    HookTransaction(HookTransaction&&)                 = delete;
    HookTransaction& operator=(HookTransaction&&)      = delete;

    bool              install(RuntimeTargets targets, RuntimeTargets detours, HookQuiescence const& scope) noexcept;
    bool              remove(HookQuiescence const& scope) noexcept;
    bool              clean() const noexcept;
    ActorNormalTick   actorOrigin() const noexcept;
    ClientLocalPlayer clientOrigin() const noexcept;

    // A failed remove leaves these member slots and their containing SO alive.
    // Destruction does not attempt an unsafe unhook. Owner must retain until clean.
private:
    struct Slot {
        pl::FuncPtr target{}, detour{}, origin{};
        bool        installed{};
    };
    std::array<Slot, 2>      slots{};
    decltype(&pl::pl_hook)   hook;
    decltype(&pl::pl_unhook) unhook;
};
} // namespace ll::android
