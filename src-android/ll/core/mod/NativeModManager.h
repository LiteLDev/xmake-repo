#pragma once
#include "ll/core/KernelContext.h"
#include "ll/core/mod/NativeModRegistry.h"

namespace ll::android {
class NativeModManager final {
public:
    NativeModManager(KernelContext& context, EventRegistry& events, KernelLogger& logger)
    : context(context),
      logger(logger),
      registry(events, logger) {}
    bool   prepare() noexcept;
    bool   loadAllMods() noexcept;
    bool   shutdown() noexcept { return registry.shutdown(); }
    bool   clean() const noexcept { return registry.clean(); }
    size_t retained() const noexcept { return registry.retained(); }
    void   reset() noexcept;

private:
    KernelContext&    context;
    KernelLogger&     logger;
    NativeModRegistry registry;
    std::string       sourceRoot, generation, selfPath, selfNote;
    uint64_t          nextOwner{1};
    bool              loadAttempted{};
    void              diagnostic(std::string_view id, std::string_view reason) noexcept;
};
} // namespace ll::android
