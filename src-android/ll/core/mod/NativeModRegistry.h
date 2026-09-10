#pragma once
#include "ll/api/android/Mod.h"
#include "ll/core/event/EventRegistry.h"
#include "ll/core/io/KernelLogger.h"
#include "ll/core/mod/ModManifest.h"
#include <memory>
#include <vector>

namespace ll::android {
enum class NativeModState {
    Discovered,
    Loaded,
    Enabling,
    Enabled,
    LoadFailed,
    EnableFailed,
    DisableFailed,
    UnloadFailed,
    Unloaded
};
struct NativeModEntry {
    ModManifest                       manifest;
    std::string                       root, data, config, resources, cached;
    ModOwner                          owner;
    LLAndroidModContextV1             context{};
    LLAndroidModRegistrationV1 const* registration{};
    void*                             handle{};
    int (*close)(void*){};
    NativeModState state{NativeModState::Discovered};
    bool           closeAttempted{};
};
class NativeModRegistry final {
public:
    NativeModRegistry(EventRegistry& events, KernelLogger& logger) : events(events), logger(logger) {}
    // Registry takes ownership before invoking any untrusted lifecycle callback.
    bool   loadAndEnable(std::unique_ptr<NativeModEntry> entry) noexcept;
    bool   shutdown() noexcept;
    bool   clean() const noexcept { return entries.empty(); }
    bool   hasRetainedFailure() const noexcept;
    size_t retained() const noexcept { return entries.size(); }

private:
    EventRegistry&                               events;
    KernelLogger&                                logger;
    std::vector<std::unique_ptr<NativeModEntry>> entries;
    bool                                         finish(NativeModEntry& entry, bool disable) noexcept;
    bool                                         call(NativeModEntry&, ModPhase, LLAndroidModLifecycleV1) noexcept;
    void report(NativeModEntry const&, std::string_view phase, bool success) noexcept;
};
} // namespace ll::android
