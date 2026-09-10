#include "ll/core/event/EventRegistry.h"
#include "pl/android/GuardedHook.h"
#include "pl/android/Mod.hpp"
#include <array>
#include <atomic>
#include <bit>
#include <chrono>
#include <cstdio>
#include <cerrno>
#include <ctime>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
using namespace ll::android;
namespace {
struct Owned { std::atomic<uint64_t> calls{}; };
EventRegistry events;
ModOwner owner{1};
uint64_t eventCalls{};
void* origin{};
uint64_t handle{};
bool retireFailed{};
FILE* report{};
__attribute__((noinline,aligned(64))) void target(Owned* value) {
    asm volatile("nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop; nop" ::: "memory");
    value->calls.fetch_add(1,std::memory_order_relaxed);
}
void detour(Owned* value) {
    std::bit_cast<void(*)(Owned*)>(origin)(value);
    events.publish(1,nullptr);
}
void listener(uint32_t,void const*,void*) noexcept { ++eventCalls; }
double batch(Owned& value,int count) {
    void (*volatile entry)(Owned*)=&target;
    auto start=std::chrono::steady_clock::now();
    for(int i=0;i<count;++i) entry(&value);
    return std::chrono::duration<double,std::micro>(std::chrono::steady_clock::now()-start).count()/count;
}
void log(pl::android::ModContext const& context,char const* phase,std::array<double,5> const& timings,std::array<double,5> const& baseline) {
    double net{};
    for(size_t i=0;i<5;++i) {
        char text[192];
        int count=std::snprintf(text,sizeof(text),"P6GuardedPerf: %s round=%zu baseline_us=%.6f total_us=%.6f net_us=%.6f",phase,i+1,baseline[i],timings[i],timings[i]-baseline[i]);
        if(count>0 && static_cast<size_t>(count)<sizeof(text)) {
            context.log(4,{text,static_cast<size_t>(count)});
            if(report) std::fprintf(report,"%s\n",text);
        }
        net+=timings[i]-baseline[i];
    }
    char text[128];
    int count=std::snprintf(text,sizeof(text),"P6GuardedPerf: %s net_mean_us=%.6f",phase,net/5);
    if(count>0 && static_cast<size_t>(count)<sizeof(text)) {
        context.log(4,{text,static_cast<size_t>(count)});
        if(report) std::fprintf(report,"%s\n",text);
    }
}
class Probe {
public:
    bool enable(pl::android::ModContext const& context) noexcept {
        auto directory=std::string(context.dataPath());
        if(directory.empty() || (mkdir(directory.c_str(),0700)!=0 && errno!=EEXIST))return false;
        auto path=directory+"/performance-"+std::to_string(getpid())+"-"+std::to_string(std::time(nullptr))+".txt";
        report=std::fopen(path.c_str(),"wx");
        if(!report)return false;
        auto api=pl_get_guarded_hook_api_v1();
        if(!api || api->abiVersion!=1 || !events.open())return false;
        Owned value;
        std::array<double,5> baseline{},zero{},one{},retired{};
        batch(value,10000);
        for(auto& time:baseline)time=batch(value,100000);
        PLGuardedHookSpecV1 spec{sizeof(spec),1,PLGuardedHook_VoidPointer,200,std::bit_cast<void*>(&target),std::bit_cast<void*>(&detour),&origin};
        if(api->install(&spec,&handle)!=0 || !origin || !handle)return false;
        batch(value,10000);
        for(auto& time:zero)time=batch(value,100000);
        {
            OwnerScope scope(owner,ModPhase::Enable);
            if(!events.subscribe(1,listener,nullptr))return false;
        }
        if(!events.activateOwner(owner))return false;
        batch(value,10000);
        for(auto& time:one)time=batch(value,100000);
        if(eventCalls!=510000 || !events.closeAndDrain() || !events.removeOwner(owner))return false;
        if(api->retire(handle)!=0 || origin) { retireFailed=true; return false; }
        handle=0;
        batch(value,10000);
        for(auto& time:retired)time=batch(value,100000);
        PLGuardedHookStateV1 state{sizeof(state),1,0,0,0,0,0};
        if(api->query(0,&state)!=0 || state.ownerBindings || state.inFlight || state.residentGateways!=1 || value.calls!=2040000)return false;
        log(context,"active-zero",zero,baseline);
        log(context,"active-one",one,baseline);
        log(context,"retired-forward",retired,baseline);
        constexpr char complete[]="P6GuardedPerf: complete actual APK provider gateway; owned target; 2040000 original calls; bindings=0 inFlight=0 resident=1";
        context.log(4,complete);
        std::fprintf(report,"%s\n",complete);
        std::fflush(report);
        return true;
    }
    bool cleanup() noexcept {
        if(retireFailed || !events.closeAndDrain() || !events.removeOwner(owner))return false;
        if(handle) {
            auto api=pl_get_guarded_hook_api_v1();
            if(!api || api->retire(handle)!=0 || origin) { retireFailed=true; return false; }
            handle=0;
        }
        bool clean=!origin && events.clean();
        if(report) {
            std::fprintf(report,"P6GuardedPerf: cleanup=%s\n",clean?"true":"false");
            if(std::fclose(report)!=0)clean=false;
            report=nullptr;
        }
        return clean;
    }
    bool disable() noexcept {return cleanup();}
    bool unload() noexcept {return cleanup();}
};
Probe probe;
}
PL_REGISTER_MOD(Probe,probe);
