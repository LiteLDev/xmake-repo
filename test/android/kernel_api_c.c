#include "ll/api/android/Kernel.h"

_Static_assert(
    LLAndroidKernel_Unloaded == 0 && LLAndroidKernel_Loaded == 1 && LLAndroidKernel_Enabling == 2
        && LLAndroidKernel_Enabled == 3 && LLAndroidKernel_Disabling == 4 && LLAndroidKernel_Failed == 5,
    "state ABI"
);
_Static_assert(
    LLAndroidLog_Trace == 0 && LLAndroidLog_Debug == 1 && LLAndroidLog_Info == 2 && LLAndroidLog_Warn == 3
        && LLAndroidLog_Error == 4 && LLAndroidLog_Fatal == 5,
    "log ABI"
);
_Static_assert(
    LLAndroidEvent_ActorNormalTickAfter == 1 && LLAndroidEvent_ClientInstanceLocalPlayerAfter == 2,
    "event ABI"
);
_Static_assert(sizeof(LLAndroidActorNormalTickAfterV1) == 16, "actor payload ABI");
_Static_assert(offsetof(LLAndroidActorNormalTickAfterV1, size) == 0, "actor size offset");
_Static_assert(offsetof(LLAndroidActorNormalTickAfterV1, version) == 4, "actor version offset");
_Static_assert(offsetof(LLAndroidActorNormalTickAfterV1, actor) == 8, "actor offset");
_Static_assert(sizeof(LLAndroidClientInstanceLocalPlayerAfterV1) == 24, "client payload ABI");
_Static_assert(offsetof(LLAndroidClientInstanceLocalPlayerAfterV1, size) == 0, "client size offset");
_Static_assert(offsetof(LLAndroidClientInstanceLocalPlayerAfterV1, version) == 4, "client version offset");
_Static_assert(offsetof(LLAndroidClientInstanceLocalPlayerAfterV1, client) == 8, "client offset");
_Static_assert(offsetof(LLAndroidClientInstanceLocalPlayerAfterV1, localPlayer) == 16, "player offset");

int kernel_c_abi_fixture(void) {
    uint32_t (*version)(void)                                      = &LLAndroidKernel_GetApiVersion;
    int32_t (*state)(void)                                         = &LLAndroidKernel_GetState;
    void (*log)(int32_t, char const*, size_t)                      = &LLAndroidKernel_Log;
    uint64_t (*subscribe)(uint32_t, LLAndroidEventCallback, void*) = &LLAndroidKernel_Subscribe;
    bool (*unsubscribe)(uint64_t)                                  = &LLAndroidKernel_Unsubscribe;
    return version != 0 && state != 0 && log != 0 && subscribe != 0 && unsubscribe != 0;
}
