#include "pl/android/Mod.h"
#include "pl/android/GuardedHook.h"
#include <cstdio>
namespace {
int installs{},retires{};
int32_t install(PLGuardedHookSpecV1 const*,uint64_t*) noexcept {++installs;return PLGuardedHook_TargetOccupied;}
int32_t retire(uint64_t) noexcept {++retires;return PLGuardedHook_UnknownHandle;}
int32_t query(uint64_t,PLGuardedHookStateV1*) noexcept {return PLGuardedHook_Ok;}
PLGuardedHookApiV1 const api{sizeof(api),1,install,retire,query};
}
extern "C" PLGuardedHookApiV1 const* pl_get_guarded_hook_api_v1() noexcept {return &api;}
int main() {
    auto* registration=PLGetModRegistration();
    PLAndroidModContextV1 context{sizeof(context),1,nullptr,"owned-failure","/owned","/owned/data","/owned/config","/owned/resources",nullptr};
    if(!registration->load(registration->instance,&context))return 1;
    if(registration->enable(registration->instance,&context))return 1;
    if(!registration->unload(registration->instance,&context) || installs!=1 || retires!=0)return 1;
    std::puts("performance fixture failure passed: occupied target refuses enable and cleans its open event registry on first unload");
}
