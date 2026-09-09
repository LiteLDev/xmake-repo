#include "ll/api/android/Kernel.h"
#include "pl/android/Mod.h"

#include <cstdio>
#include <cstring>
#include <dlfcn.h>
#include <type_traits>
#include <unistd.h>

namespace {
int    calls{};
int    lastPriority{};
size_t lastSize{};
void   providerLog(int32_t priority, char const*, size_t size) {
    ++calls;
    lastPriority = priority;
    lastSize     = size;
}
void eventCallback(uint32_t, void const*, void*) noexcept {}
template <typename T>
T function(void* handle, char const* name, char const* expectedFile) {
    auto    address = dlsym(handle, name);
    Dl_info info{};
    if (!address || !dladdr(address, &info) || !info.dli_fname || std::strcmp(info.dli_fname, expectedFile) != 0) {
        std::fprintf(stderr, "probe symbol ownership failed: %s\n", name);
        return nullptr;
    }
    return reinterpret_cast<T>(address);
}
} // namespace

#define REQUIRE(expr)                                                                                                  \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "production probe failed line %d\n", __LINE__);                                       \
            return 1;                                                                                                  \
        }                                                                                                              \
    } while (false)

int main(int argc, char** argv) {
    REQUIRE(argc == 2);
    auto handle = dlopen(argv[1], RTLD_NOW | RTLD_LOCAL);
    if (!handle) {
        std::fprintf(stderr, "dlopen: %s\n", dlerror());
        return 1;
    }
    auto version = function<decltype(&LLAndroidKernel_GetApiVersion)>(handle, "LLAndroidKernel_GetApiVersion", argv[1]);
    auto state   = function<decltype(&LLAndroidKernel_GetState)>(handle, "LLAndroidKernel_GetState", argv[1]);
    auto log     = function<decltype(&LLAndroidKernel_Log)>(handle, "LLAndroidKernel_Log", argv[1]);
    auto subscribe   = function<decltype(&LLAndroidKernel_Subscribe)>(handle, "LLAndroidKernel_Subscribe", argv[1]);
    auto unsubscribe = function<decltype(&LLAndroidKernel_Unsubscribe)>(handle, "LLAndroidKernel_Unsubscribe", argv[1]);
    auto getRegistration = function<decltype(&PLGetModRegistration)>(handle, "PLGetModRegistration", argv[1]);
    REQUIRE(version && state && log && subscribe && unsubscribe && getRegistration);
    REQUIRE(version() == 1 && state() == LLAndroidKernel_Unloaded);
    log(LLAndroidLog_Info, "G3 production fallback before load", 34);
    auto* registration = getRegistration();
    REQUIRE(registration && registration->abiVersion == 1 && registration->size == 48);
    PLAndroidModContextV1 context{
        sizeof(PLAndroidModContextV1),
        1,
        nullptr,
        "production-probe",
        "/owned/root",
        "/owned/data",
        "/owned/config",
        "/owned/resources",
        providerLog
    };
    REQUIRE(registration->load(registration->instance, &context));
    REQUIRE(state() == LLAndroidKernel_Loaded);
    auto before = calls;
    log(LLAndroidLog_Fatal, "fatal-is-not-abort", 18);
    REQUIRE(calls == before + 1 && lastPriority == 6 && lastSize == 18);
    REQUIRE(!registration->enable(registration->instance, &context));
    REQUIRE(state() == LLAndroidKernel_Failed);
    REQUIRE(subscribe(LLAndroidEvent_ActorNormalTickAfter, eventCallback, nullptr) == 0);
    REQUIRE(!unsubscribe(1));
    REQUIRE(!registration->enable(registration->instance, &context));
    REQUIRE(registration->unload(registration->instance, &context));
    REQUIRE(state() == LLAndroidKernel_Unloaded);
    REQUIRE(dlclose(handle) == 0);
    std::printf(
        "G3 production SO probe passed (PID %d): owned six exports, PL lifecycle, logger, activation refusal and "
        "close\n",
        getpid()
    );
    return 0;
}
