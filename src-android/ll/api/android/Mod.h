#pragma once
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
#define LL_MOD_NOEXCEPT noexcept
extern "C" {
#else
#define LL_MOD_NOEXCEPT
#endif
#if defined(_WIN32)
#if defined(LL_ANDROID_MOD_EXPORTS)
#define LL_ANDROID_MOD_API __declspec(dllexport)
#else
#define LL_ANDROID_MOD_API __declspec(dllimport)
#endif
#else
#define LL_ANDROID_MOD_API __attribute__((visibility("default")))
#endif

typedef struct LLAndroidModContextV1 {
    uint32_t    size;
    uint32_t    abiVersion;
    void*       javaVm;
    char const* modId;
    char const* rootPath;
    char const* dataPath;
    char const* configPath;
    char const* resourcePath;
} LLAndroidModContextV1;
typedef bool (*LLAndroidModLifecycleV1)(void*, LLAndroidModContextV1 const*) LL_MOD_NOEXCEPT;
typedef struct LLAndroidModRegistrationV1 {
    uint32_t                size;
    uint32_t                abiVersion;
    uint32_t                requiredKernelApiVersion;
    uint32_t                reserved;
    void*                   instance;
    LLAndroidModLifecycleV1 load;
    LLAndroidModLifecycleV1 enable;
    LLAndroidModLifecycleV1 disable;
    LLAndroidModLifecycleV1 unload;
} LLAndroidModRegistrationV1;

LL_ANDROID_MOD_API LLAndroidModRegistrationV1 const* LLGetModRegistration(void) LL_MOD_NOEXCEPT;
#ifdef __cplusplus
}
#endif
#undef LL_MOD_NOEXCEPT
