#pragma once

#include "ll/core/android/KernelContext.h"
#include "ll/core/android/KernelLogger.h"
#include "ll/core/android/RuntimeOperations.h"

#include <atomic>
#include <cstdint>
#include <mutex>

namespace ll::android {

class KernelLifecycle {
public:
    KernelLifecycle(KernelContext& context, KernelLogger& logger, RuntimeOperations& operations) noexcept
    : context(context),
      logger(logger),
      operations(operations) {}
    bool     load(pl::android::ModContext const& context) noexcept;
    bool     enable(pl::android::ModContext const& context) noexcept;
    bool     disable(pl::android::ModContext const& context) noexcept;
    bool     unload(pl::android::ModContext const& context) noexcept;
    int32_t  getState() const noexcept { return state.load(std::memory_order_acquire); }
    void     log(int32_t level, char const* message, size_t size) noexcept { logger.write(level, message, size); }
    uint64_t subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept;
    bool     unsubscribe(uint64_t token) noexcept;

private:
    KernelContext&       context;
    KernelLogger&        logger;
    RuntimeOperations&   operations;
    std::mutex           lifecycleMutex;
    std::atomic<int32_t> state{LLAndroidKernel_Unloaded};
};

KernelLifecycle& kernel() noexcept;

} // namespace ll::android
