#include "ll/core/KernelLifecycle.h"

namespace ll::android {

bool KernelLifecycle::load(pl::android::ModContext const& source) noexcept {
    if (operations.inCallback()) return false;
    std::lock_guard lock(lifecycleMutex);
    if (getState() != LLAndroidKernel_Unloaded || !operations.clean() || !context.initialize(source)) return false;
    state.store(LLAndroidKernel_Loaded, std::memory_order_release);
    logger.write(LLAndroidLog_Info, "LeviLamina: Loaded");
    return true;
}

bool KernelLifecycle::enable(pl::android::ModContext const&) noexcept {
    if (operations.inCallback()) return false;
    std::lock_guard lock(lifecycleMutex);
    if (getState() != LLAndroidKernel_Loaded) return false;
    state.store(LLAndroidKernel_Enabling, std::memory_order_release);
    if (!operations.enable()) {
        state.store(LLAndroidKernel_Failed, std::memory_order_release);
        logger.write(
            LLAndroidLog_Error,
            operations.clean() ? "LeviLamina: Failed; activation refused, no retained resources"
                               : "LeviLamina: Failed; activation left retained resources"
        );
        return false;
    }
    state.store(LLAndroidKernel_Enabled, std::memory_order_release);
    logger.write(LLAndroidLog_Info, "LeviLamina: Enabled");
    return true;
}

bool KernelLifecycle::disable(pl::android::ModContext const&) noexcept {
    if (operations.inCallback()) return false;
    std::lock_guard lock(lifecycleMutex);
    if (getState() == LLAndroidKernel_Loaded) return true;
    if (getState() != LLAndroidKernel_Enabled) return false;
    state.store(LLAndroidKernel_Disabling, std::memory_order_release);
    bool disabled = operations.disable();
    bool clean    = operations.clean();
    if (!disabled || !clean) {
        state.store(LLAndroidKernel_Failed, std::memory_order_release);
        logger.write(
            LLAndroidLog_Error,
            clean ? "LeviLamina: Failed; cleanup refused, no retained resources"
                  : "LeviLamina: Failed; cleanup left retained resources"
        );
        return false;
    }
    state.store(LLAndroidKernel_Loaded, std::memory_order_release);
    logger.write(LLAndroidLog_Info, "LeviLamina: Loaded; disabled");
    return true;
}

bool KernelLifecycle::unload(pl::android::ModContext const&) noexcept {
    if (operations.inCallback()) return false;
    std::lock_guard lock(lifecycleMutex);
    auto            current = getState();
    if (current == LLAndroidKernel_Unloaded) return true;
    if ((current != LLAndroidKernel_Loaded && current != LLAndroidKernel_Failed) || !operations.clean()) return false;
    logger.write(LLAndroidLog_Info, "LeviLamina: Unloaded");
    context.reset();
    state.store(LLAndroidKernel_Unloaded, std::memory_order_release);
    return true;
}

uint64_t KernelLifecycle::subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept {
    if (getState() != LLAndroidKernel_Enabled || !callback
        || (kind != LLAndroidEvent_ActorNormalTickAfter && kind != LLAndroidEvent_ClientInstanceLocalPlayerAfter))
        return 0;
    // The backend atomically checks publishing/owner eligibility with insertion.
    return operations.subscribe(kind, callback, userData);
}

bool KernelLifecycle::unsubscribe(uint64_t token) noexcept { return token != 0 && operations.unsubscribe(token); }

} // namespace ll::android
