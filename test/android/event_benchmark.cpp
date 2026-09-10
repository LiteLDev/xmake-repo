#include "ll/core/event/EventRegistry.h"
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <new>
using namespace ll::android;
namespace {
bool measuring{};
uint64_t allocations{}, logCalls{}, hits{};
void* allocate(size_t size) noexcept {
    if (measuring) ++allocations;
    return std::malloc(size ? size : 1);
}
void listener(uint32_t, void const*, void*) noexcept { ++hits; }
__attribute__((noinline)) void baseline(EventRegistry*, uint32_t, void const*) noexcept {
    std::atomic_signal_fence(std::memory_order_seq_cst);
}
__attribute__((noinline)) void dispatch(EventRegistry* registry, uint32_t kind, void const* payload) noexcept {
    registry->publish(kind, payload);
}
using Function = void (*)(EventRegistry*, uint32_t, void const*) noexcept;
double batch(Function function, EventRegistry& events, int iterations) {
    auto start = std::chrono::steady_clock::now();
    for (int i = 0; i < iterations; ++i) function(&events, 1, nullptr);
    return std::chrono::duration<double, std::micro>(std::chrono::steady_clock::now() - start).count() / iterations;
}
bool benchmark(EventRegistry& events, int count) {
    batch(baseline, events, 10000);
    batch(dispatch, events, 10000);
    allocations = logCalls = 0;
    measuring = true;
    double baselineUs[5]{}, dispatchUs[5]{}, net{};
    for (int round = 0; round < 5; ++round) {
        if (round % 2) {
            dispatchUs[round] = batch(dispatch, events, 100000);
            baselineUs[round] = batch(baseline, events, 100000);
        } else {
            baselineUs[round] = batch(baseline, events, 100000);
            dispatchUs[round] = batch(dispatch, events, 100000);
        }
        net += dispatchUs[round] - baselineUs[round];
    }
    measuring = false;
    net /= 5;
    for (int round = 0; round < 5; ++round)
        std::printf("listeners=%d round=%d baseline_us=%.6f dispatch_us=%.6f net_us=%.6f\n",
                    count, round + 1, baselineUs[round], dispatchUs[round], dispatchUs[round] - baselineUs[round]);
    bool passed = net <= (count ? 5.0 : 0.5) && (count || allocations == 0) && logCalls == 0;
    std::printf("listeners=%d net_mean_us=%.6f allocations=%llu logs=%llu passed=%d\n", count, net,
                static_cast<unsigned long long>(allocations), static_cast<unsigned long long>(logCalls), passed);
    return passed;
}
}
void* operator new(size_t size) { auto pointer = allocate(size); if (!pointer) std::abort(); return pointer; }
void* operator new[](size_t size) { return ::operator new(size); }
void* operator new(size_t size, std::nothrow_t const&) noexcept { return allocate(size); }
void* operator new[](size_t size, std::nothrow_t const&) noexcept { return allocate(size); }
void operator delete(void* pointer) noexcept { std::free(pointer); }
void operator delete[](void* pointer) noexcept { std::free(pointer); }
void operator delete(void* pointer, size_t) noexcept { std::free(pointer); }
void operator delete[](void* pointer, size_t) noexcept { std::free(pointer); }
void operator delete(void* pointer, std::nothrow_t const&) noexcept { std::free(pointer); }
void operator delete[](void* pointer, std::nothrow_t const&) noexcept { std::free(pointer); }
extern "C" void LLAndroidKernel_Log(int32_t, char const*, size_t) noexcept { if (measuring) ++logCalls; }
extern "C" int __android_log_write(int, char const*, char const*) { if (measuring) ++logCalls; return 0; }
extern "C" int __android_log_print(int, char const*, char const*, ...) { if (measuring) ++logCalls; return 0; }
int main() {
    EventRegistry events;
    ModOwner owner{1};
    if (!events.open() || !benchmark(events, 0)) return 1;
    {
        OwnerScope scope(owner, ModPhase::Enable);
        if (!events.subscribe(1, listener, nullptr)) return 1;
    }
    if (!events.activateOwner(owner) || !benchmark(events, 1) || hits != 510000) return 1;
    if (!events.closeAndDrain() || !events.removeOwner(owner) || !events.clean()) return 1;
    std::puts("event performance passed: fixed 10000 warmup and 5 x 100000 measured calls");
}
