#include "ll/core/KernelLifecycle.h"
#include "ll/core/io/Output.h"

namespace ll::android {
namespace {
class QuiescenceGate final : public RuntimeOperations {
public:
    explicit QuiescenceGate(KernelLogger& logger) : logger(logger) {}
    bool enable() noexcept override {
        logger.write(LLAndroidLog_Warn, "LeviLamina: Minecraft activation blocked; quiescence contract unavailable");
        return false;
    }
    bool disable() noexcept override { return true; }
    bool clean() const noexcept override { return true; }
    bool inCallback() const noexcept override { return false; }
    // G3 has no eligible LL Mod owner or publishing context; G5 supplies those.
    uint64_t subscribe(uint32_t, LLAndroidEventCallback, void*) noexcept override { return 0; }
    bool     unsubscribe(uint64_t) noexcept override { return false; }

private:
    KernelLogger& logger;
};
struct Runtime {
    KernelContext   context;
    KernelLogger    logger{context, fallbackLog};
    QuiescenceGate  gate{logger};
    KernelLifecycle lifecycle{context, logger, gate};
};
} // namespace
KernelLifecycle& kernel() noexcept {
    static Runtime runtime;
    return runtime.lifecycle;
}
} // namespace ll::android
