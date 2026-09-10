#pragma once

#include "pl/android/Mod.hpp"
#include <array>
#include <memory>
#include <mutex>
#include <optional>
#include <string_view>

namespace ll::android {
using FallbackLog = void (*)(int32_t priority, char const* message) noexcept;
struct LogMirror {
    void (*open)(std::string_view dataPath) noexcept {};
    void (*write)(int32_t priority, std::string_view message) noexcept {};
    void (*close)() noexcept {};
};

class KernelContext {
public:
    explicit KernelContext(LogMirror mirror = {}) noexcept : mirror(mirror) {}
    // PL owns the referenced C context until safe unload. Copy its C++ wrapper;
    // never retain the address of the temporary wrapper passed into load.
    bool initialize(pl::android::ModContext const& source) noexcept;
    void reset() noexcept;
    void write(int32_t priority, std::string_view message, FallbackLog fallback) noexcept;
    struct View {
        JavaVM*                         javaVm;
        std::array<std::string_view, 5> identityAndPaths;
    };
    // Internal lifecycle/fixture access: borrowed views must not outlive reset.
    View view() const noexcept;

private:
    mutable std::mutex                     mutex;
    JavaVM*                                vm{};
    std::array<std::unique_ptr<char[]>, 5> text;
    std::array<size_t, 5>                  lengths{};
    std::optional<pl::android::ModContext> context;
    LogMirror                              mirror;
};
} // namespace ll::android
