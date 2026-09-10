#pragma once
#include "ll/core/memory/RuntimeSymbols.h"
#include "pl/android/GuardedHook.h"
#include <array>

namespace ll::android {
class HookTransaction final {
public:
    HookTransaction()                                  = default;
    HookTransaction(HookTransaction const&)            = delete;
    HookTransaction& operator=(HookTransaction const&) = delete;
    HookTransaction(HookTransaction&&)                 = delete;
    HookTransaction&  operator=(HookTransaction&&)     = delete;
    bool              configure(PLGuardedHookApiV1 const*) noexcept;
    bool              install(RuntimeTargets targets, RuntimeTargets detours) noexcept;
    bool              remove() noexcept;
    bool              clean() const noexcept;
    ActorNormalTick   actorOrigin() const noexcept;
    ClientLocalPlayer clientOrigin() const noexcept;
    int32_t           lastError() const noexcept { return error; }

private:
    struct Slot {
        void*    origin{};
        uint64_t handle{};
    };
    std::array<Slot, 2>       slots{};
    PLGuardedHookApiV1 const* api{};
    int32_t                   error{};
    bool                      uncertainOwnership{};
};
} // namespace ll::android
