#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
#define LL_ANDROID_NOEXCEPT noexcept
extern "C" {
#else
#define LL_ANDROID_NOEXCEPT
#endif

#if defined(_WIN32)
#ifdef LL_ANDROID_KERNEL_EXPORTS
#define LL_ANDROID_API __declspec(dllexport)
#else
#define LL_ANDROID_API __declspec(dllimport)
#endif
#else
#define LL_ANDROID_API __attribute__((visibility("default")))
#endif

enum LLAndroidKernelState {
    LLAndroidKernel_Unloaded  = 0,
    LLAndroidKernel_Loaded    = 1,
    LLAndroidKernel_Enabling  = 2,
    LLAndroidKernel_Enabled   = 3,
    LLAndroidKernel_Disabling = 4,
    LLAndroidKernel_Failed    = 5
};
enum LLAndroidLogLevel {
    LLAndroidLog_Trace = 0,
    LLAndroidLog_Debug = 1,
    LLAndroidLog_Info  = 2,
    LLAndroidLog_Warn  = 3,
    LLAndroidLog_Error = 4,
    LLAndroidLog_Fatal = 5
};
enum LLAndroidEventKind { LLAndroidEvent_ActorNormalTickAfter = 1, LLAndroidEvent_ClientInstanceLocalPlayerAfter = 2 };

typedef struct LLAndroidActorNormalTickAfterV1 {
    uint32_t    size;
    uint32_t    version;
    void const* actor;
} LLAndroidActorNormalTickAfterV1;
typedef struct LLAndroidClientInstanceLocalPlayerAfterV1 {
    uint32_t    size;
    uint32_t    version;
    void const* client;
    void const* localPlayer;
} LLAndroidClientInstanceLocalPlayerAfterV1;

typedef void (*LLAndroidEventCallback)(uint32_t eventKind, void const* payload, void* userData) LL_ANDROID_NOEXCEPT;
LL_ANDROID_API uint32_t LLAndroidKernel_GetApiVersion(void) LL_ANDROID_NOEXCEPT;
LL_ANDROID_API int32_t  LLAndroidKernel_GetState(void) LL_ANDROID_NOEXCEPT;
LL_ANDROID_API void     LLAndroidKernel_Log(int32_t level, char const* utf8, size_t size) LL_ANDROID_NOEXCEPT;
LL_ANDROID_API uint64_t
LLAndroidKernel_Subscribe(uint32_t eventKind, LLAndroidEventCallback callback, void* userData) LL_ANDROID_NOEXCEPT;
LL_ANDROID_API bool LLAndroidKernel_Unsubscribe(uint64_t token) LL_ANDROID_NOEXCEPT;

// PLGetModRegistration is declared by the unchanged pl/android/Mod.h SDK.
#ifdef __cplusplus
}
#endif
#undef LL_ANDROID_NOEXCEPT
