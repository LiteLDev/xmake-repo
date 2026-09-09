#include "ll/api/android/Kernel.h"
#include "ll/core/android/KernelLifecycle.h"

extern "C" {
uint32_t LLAndroidKernel_GetApiVersion() noexcept { return 1; }
int32_t  LLAndroidKernel_GetState() noexcept { return ll::android::kernel().getState(); }
void     LLAndroidKernel_Log(int32_t level, char const* text, size_t size) noexcept {
    ll::android::kernel().log(level, text, size);
}
uint64_t LLAndroidKernel_Subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept {
    return ll::android::kernel().subscribe(kind, callback, userData);
}
bool LLAndroidKernel_Unsubscribe(uint64_t token) noexcept { return ll::android::kernel().unsubscribe(token); }
}
