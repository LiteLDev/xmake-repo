#pragma once
#include "ll/api/android/Kernel.h"
#include "ll/api/android/Mod.h"
#include <concepts>
#include <memory>
#include <string_view>
#include <utility>

namespace ll::android::mod {
class ModContext {
public:
    explicit ModContext(LLAndroidModContextV1 const& value) noexcept : context(value) {}
    void*            javaVm() const noexcept { return context.javaVm; }
    std::string_view id() const noexcept { return context.modId ? context.modId : ""; }
    std::string_view rootPath() const noexcept { return context.rootPath ? context.rootPath : ""; }
    std::string_view dataPath() const noexcept { return context.dataPath ? context.dataPath : ""; }
    std::string_view configPath() const noexcept { return context.configPath ? context.configPath : ""; }
    std::string_view resourcePath() const noexcept { return context.resourcePath ? context.resourcePath : ""; }
    void             log(int32_t level, std::string_view text) const noexcept {
        LLAndroidKernel_Log(level, text.data(), text.size());
    }

private:
    // Values are copied; the loader owns the pointed-to strings through unload.
    LLAndroidModContextV1 context;
};

namespace detail {
#define LL_MOD_CALLBACK(NAME)                                                                                          \
    template <typename T>                                                                                              \
    bool NAME(void* value, LLAndroidModContextV1 const* raw) noexcept {                                                \
        if (!value || !raw || raw->size != sizeof(*raw) || raw->abiVersion != 1) return false;                         \
        auto& instance = *static_cast<T*>(value);                                                                      \
        if constexpr (requires {                                                                                       \
                          { instance.NAME(ModContext(*raw)) } -> std::same_as<bool>;                                   \
                      })                                                                                               \
            return instance.NAME(ModContext(*raw));                                                                    \
        else {                                                                                                         \
            static_assert(                                                                                             \
                requires {                                                                                             \
                    { instance.NAME() } -> std::same_as<bool>;                                                         \
                },                                                                                                     \
                "All four LL lifecycle methods are required"                                                           \
            );                                                                                                         \
            return instance.NAME();                                                                                    \
        }                                                                                                              \
    }
LL_MOD_CALLBACK(load)
LL_MOD_CALLBACK(enable)
LL_MOD_CALLBACK(disable)
LL_MOD_CALLBACK(unload)
#undef LL_MOD_CALLBACK
template <typename T>
T& materialize(T& value) {
    return value;
}
template <typename T>
T& materialize(T&& value) {
    static T instance(std::move(value));
    return instance;
}
template <typename T>
LLAndroidModRegistrationV1 registration(T& value) noexcept {
    return {
        sizeof(LLAndroidModRegistrationV1),
        1,
        1,
        0,
        std::addressof(value),
        load<T>,
        enable<T>,
        disable<T>,
        unload<T>
    };
}
} // namespace detail
} // namespace ll::android::mod

#define LL_REGISTER_MOD(TYPE, INSTANCE)                                                                                \
    extern "C" LL_ANDROID_MOD_API LLAndroidModRegistrationV1 const* LLGetModRegistration() noexcept {                  \
        static auto table =                                                                                            \
            ::ll::android::mod::detail::registration(::ll::android::mod::detail::materialize<TYPE>((INSTANCE)));       \
        return &table;                                                                                                 \
    }
