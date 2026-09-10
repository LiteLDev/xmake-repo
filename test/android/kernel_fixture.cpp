#include "ll/api/android/Kernel.h"
#include "ll/core/KernelLifecycle.h"
#include "pl/android/Mod.hpp"

#include <array>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <cstring>
#include <thread>
#include <type_traits>

extern "C" int kernel_c_abi_fixture(void);
static_assert(std::is_same_v<decltype(&LLAndroidKernel_GetApiVersion), uint32_t (*)() noexcept>);
static_assert(std::is_same_v<decltype(&LLAndroidKernel_GetState), int32_t (*)() noexcept>);
static_assert(std::is_same_v<decltype(&LLAndroidKernel_Log), void (*)(int32_t, char const*, size_t) noexcept>);
static_assert(
    std::is_same_v<decltype(&LLAndroidKernel_Subscribe), uint64_t (*)(uint32_t, LLAndroidEventCallback, void*) noexcept>
);
static_assert(std::is_same_v<decltype(&LLAndroidKernel_Unsubscribe), bool (*)(uint64_t) noexcept>);
static_assert(std::is_same_v<decltype(&PLGetModRegistration), PLAndroidModRegistrationV1* (*)()>);
static_assert(sizeof(PLAndroidModContextV1) == 64 && sizeof(PLAndroidModRegistrationV1) == 48);
static_assert(sizeof(LLAndroidActorNormalTickAfterV1) == 16 && sizeof(LLAndroidClientInstanceLocalPlayerAfterV1) == 24);
static_assert(!std::is_convertible_v<void (*)(uint32_t, void const*, void*), LLAndroidEventCallback>);

#define CHECK(expr)                                                                                                    \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #expr);                                               \
            return false;                                                                                              \
        }                                                                                                              \
    } while (false)

namespace fixture {
struct Capture {
    std::mutex              mutex;
    std::condition_variable changed;
    size_t                  plCalls{}, fallbackCalls{}, size{};
    int32_t                 priority{};
    std::array<char, 4097>  message{};
    bool                    block{}, entered{}, release{};
} capture;

void sink(int32_t priority, char const* message, size_t size, bool fallback) noexcept {
    std::unique_lock lock(capture.mutex);
    if (fallback) ++capture.fallbackCalls;
    else ++capture.plCalls;
    capture.priority = priority;
    capture.size     = size;
    if (size <= 4096) {
        std::memcpy(capture.message.data(), message, size);
        capture.message[size] = 0;
    }
    if (capture.block) {
        capture.entered = true;
        capture.changed.notify_all();
        capture.changed.wait(lock, [] { return capture.release; });
    }
}
void plLog(int32_t level, char const* message, size_t size) { sink(level, message, size, false); }
void fallback(int32_t level, char const* message) noexcept { sink(level, message, std::strlen(message), true); }

struct Backend final : ll::android::RuntimeOperations {
    bool     enableResult{true}, disableResult{true}, residualOnFailure{}, resources{}, callback{}, owner{};
    bool     cleanOnDisableFailure{};
    bool     childResult{true};
    unsigned enables{}, disables{}, subscriptions{};
    int32_t  enablingObserved{}, disablingObserved{};
    uint64_t lastToken{};
    LLAndroidEventCallback lastCallback{};
    void*                  lastUserData{};
    bool                   enable() noexcept override {
        ++enables;
        enablingObserved = LLAndroidKernel_GetState();
        resources        = enableResult || residualOnFailure;
        return enableResult;
    }
    bool disable() noexcept override {
        ++disables;
        disablingObserved = LLAndroidKernel_GetState();
        if (disableResult || cleanOnDisableFailure) resources = false;
        return disableResult;
    }
    bool     enableChildren() noexcept override { return childResult; }
    bool     clean() const noexcept override { return !resources; }
    bool     inCallback() const noexcept override { return callback; }
    uint64_t subscribe(uint32_t, LLAndroidEventCallback cb, void* data) noexcept override {
        if (!owner || !resources) return 0;
        ++subscriptions;
        lastCallback = cb;
        lastUserData = data;
        return ++lastToken;
    }
    bool unsubscribe(uint64_t token) noexcept override {
        if (!token || token != lastToken) return false;
        lastToken = 0;
        return true;
    }
} backend;
ll::android::KernelContext   context;
ll::android::KernelLogger    logger{context, fallback};
ll::android::KernelLifecycle lifecycle{context, logger, backend};
char                         id[]   = "fixture-owner";
char                         root[] = "/fixture/root";
PLAndroidModContextV1        raw{
    sizeof(PLAndroidModContextV1),
    1,
    reinterpret_cast<void*>(0x1234),
    id,
    root,
    "/fixture/data",
    "/fixture/config",
    "/fixture/resources",
    plLog
};
void callback(uint32_t, void const*, void*) noexcept {}

bool lifecycleTests() {
    auto* r = PLGetModRegistration();
    CHECK(r && r->size == 48 && r->abiVersion == 1);
    CHECK(kernel_c_abi_fixture() == 1 && LLAndroidKernel_GetApiVersion() == 1);
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Unloaded);
    CHECK(!r->load(nullptr, &raw));
    CHECK(!r->load(r->instance, nullptr));
    CHECK(!r->enable(r->instance, &raw));
    CHECK(!r->disable(r->instance, &raw));
    CHECK(r->unload(r->instance, &raw));
    auto invalid     = raw;
    invalid.rootPath = "";
    CHECK(!r->load(r->instance, &invalid));
    CHECK(context.view().identityAndPaths[0].empty());
    CHECK(r->load(r->instance, &raw));
    CHECK(!r->load(r->instance, &raw));
    CHECK(context.view().javaVm == reinterpret_cast<JavaVM*>(0x1234));
    CHECK(context.view().identityAndPaths[0] == "fixture-owner");
    id[0]   = 'X';
    root[1] = 'X';
    CHECK(context.view().identityAndPaths[0] == "fixture-owner");
    CHECK(context.view().identityAndPaths[1] == "/fixture/root");
    id[0]   = 'f';
    root[1] = 'f';
    CHECK(LLAndroidKernel_Subscribe(1, callback, nullptr) == 0);
    CHECK(r->enable(r->instance, &raw));
    CHECK(backend.enablingObserved == LLAndroidKernel_Enabling);
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Enabled);
    CHECK(!r->enable(r->instance, &raw) && backend.enables == 1);
    CHECK(!r->unload(r->instance, &raw));
    CHECK(LLAndroidKernel_Subscribe(1, callback, nullptr) == 0); // unknown owner
    backend.owner = true;
    CHECK(LLAndroidKernel_Subscribe(3, callback, nullptr) == 0);
    CHECK(LLAndroidKernel_Subscribe(1, nullptr, nullptr) == 0);
    auto token = LLAndroidKernel_Subscribe(2, callback, nullptr);
    CHECK(token != 0 && backend.lastCallback == callback && backend.lastUserData == nullptr);
    CHECK(!LLAndroidKernel_Unsubscribe(0) && !LLAndroidKernel_Unsubscribe(token + 1));
    CHECK(LLAndroidKernel_Unsubscribe(token) && !LLAndroidKernel_Unsubscribe(token));
    backend.callback = true;
    CHECK(!r->disable(r->instance, &raw) && !r->unload(r->instance, &raw));
    CHECK(!r->load(r->instance, &raw) && !r->enable(r->instance, &raw));
    backend.callback = false;
    CHECK(r->disable(r->instance, &raw));
    CHECK(backend.disablingObserved == LLAndroidKernel_Disabling);
    CHECK(r->disable(r->instance, &raw) && backend.disables == 1);
    CHECK(r->unload(r->instance, &raw) && r->unload(r->instance, &raw));
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Unloaded);
    CHECK(context.view().javaVm == nullptr && context.view().identityAndPaths[0].empty());
    return true;
}

bool failureTests() {
    auto* r              = PLGetModRegistration();
    backend.enableResult = false;
    CHECK(r->load(r->instance, &raw));
    CHECK(!r->enable(r->instance, &raw));
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Failed);
    CHECK(!r->enable(r->instance, &raw));
    CHECK(r->unload(r->instance, &raw));
    backend.residualOnFailure = true;
    CHECK(r->load(r->instance, &raw));
    CHECK(!r->enable(r->instance, &raw));
    CHECK(!r->unload(r->instance, &raw));
    auto before = capture.plCalls;
    LLAndroidKernel_Log(LLAndroidLog_Info, "retained", 8);
    CHECK(capture.plCalls == before + 1 && !context.view().identityAndPaths[0].empty());
    // Fixture owner releases its synthetic resource; production never depends on
    // repeated PL failure callbacks to repair a failed cleanup.
    backend.resources = false;
    CHECK(r->unload(r->instance, &raw));
    backend.enableResult  = true;
    backend.disableResult = false;
    CHECK(r->load(r->instance, &raw) && r->enable(r->instance, &raw));
    CHECK(!r->disable(r->instance, &raw));
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Failed && !r->unload(r->instance, &raw));
    CHECK(std::strstr(capture.message.data(), "cleanup left retained resources"));
    backend.resources = false;
    CHECK(r->unload(r->instance, &raw));
    backend.cleanOnDisableFailure = true;
    CHECK(r->load(r->instance, &raw) && r->enable(r->instance, &raw));
    CHECK(!r->disable(r->instance, &raw));
    CHECK(std::strstr(capture.message.data(), "cleanup refused, no retained resources"));
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Failed && r->unload(r->instance, &raw));
    backend.cleanOnDisableFailure = false;
    backend.disableResult         = true;
    backend.residualOnFailure     = false;
    return true;
}

bool childFailureTests() {
    auto* registration  = PLGetModRegistration();
    backend.childResult = false;
    for (bool retained : {false, true}) {
        backend.disableResult = !retained;
        auto before           = backend.disables;
        CHECK(registration->load(registration->instance, &raw));
        CHECK(!registration->enable(registration->instance, &raw));
        CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Failed && backend.disables == before + 1);
        CHECK(!registration->disable(registration->instance, &raw) && backend.disables == before + 1);
        CHECK(registration->unload(registration->instance, &raw) == !retained);
        if (retained) {
            CHECK(!context.view().identityAndPaths[0].empty());
            // Release only the fixture's synthetic resource between cases.
            backend.resources = false;
            CHECK(registration->unload(registration->instance, &raw));
        }
    }
    backend.childResult = backend.disableResult = true;
    return true;
}

bool logTests() {
    auto* r              = PLGetModRegistration();
    auto  beforeFallback = capture.fallbackCalls;
    LLAndroidKernel_Log(LLAndroidLog_Info, "before", 6);
    CHECK(capture.fallbackCalls == beforeFallback + 1);
    CHECK(r->load(r->instance, &raw));
    auto              noFallback   = capture.fallbackCalls;
    constexpr int32_t priorities[] = {3, 3, 4, 5, 6, 6};
    for (int32_t i = 0; i != 6; ++i) {
        LLAndroidKernel_Log(i, "level", 5);
        CHECK(capture.priority == priorities[i] && capture.size == 5);
    }
    std::array<char, 4097> boundary;
    boundary.fill('x');
    LLAndroidKernel_Log(2, boundary.data(), 4096);
    CHECK(capture.size == 4096);
    auto calls = capture.plCalls;
    LLAndroidKernel_Log(2, boundary.data(), 4097);
    LLAndroidKernel_Log(-1, "bad", 3);
    LLAndroidKernel_Log(6, "bad", 3);
    LLAndroidKernel_Log(2, nullptr, 0);
    LLAndroidKernel_Log(2, nullptr, 1);
    LLAndroidKernel_Log(2, "", 0);
    for (auto text : {
             std::string_view{            "a\0b", 3},
             std::string_view{        "\xC0\x80", 2},
             std::string_view{    "\xED\xA0\x80", 3},
             std::string_view{"\xF4\x90\x80\x80", 4},
             std::string_view{    "\xF0\x9F\x8C", 3},
             std::string_view{            "\x80", 1},
             std::string_view{            "\xFF", 1}
    }) {
        LLAndroidKernel_Log(2, text.data(), text.size());
    }
    CHECK(capture.plCalls == calls);
    for (auto text : {
             std::string_view{        "\xC2\x80", 2},
             std::string_view{    "\xE0\xA0\x80", 3},
             std::string_view{    "\xED\x9F\xBF", 3},
             std::string_view{"\xF0\x90\x80\x80", 4},
             std::string_view{"\xF4\x8F\xBF\xBF", 4}
    }) {
        LLAndroidKernel_Log(2, text.data(), text.size());
        CHECK(capture.size == text.size() && std::memcmp(capture.message.data(), text.data(), text.size()) == 0);
    }
    CHECK(capture.plCalls == calls + 5 && capture.fallbackCalls == noFallback);
    CHECK(r->unload(r->instance, &raw));
    LLAndroidKernel_Log(2, "after", 5);
    CHECK(capture.fallbackCalls == noFallback + 1);
    return true;
}

bool concurrentLogReset() {
    auto* r = PLGetModRegistration();
    CHECK(r->load(r->instance, &raw));
    {
        std::lock_guard lock(capture.mutex);
        capture.block   = true;
        capture.entered = false;
        capture.release = false;
    }
    std::thread logging([] { LLAndroidKernel_Log(2, "in-flight", 9); });
    bool        entered;
    {
        std::unique_lock lock(capture.mutex);
        entered = capture.changed.wait_for(lock, std::chrono::seconds(2), [] { return capture.entered; });
    }
    std::atomic<bool> attempted{}, finished{};
    bool              unloaded = false;
    std::thread       unloading([&] {
        attempted = true;
        unloaded  = r->unload(r->instance, &raw);
        finished  = true;
    });
    while (!attempted.load()) std::this_thread::yield();
    bool finishedWhileLoggerHeld = finished.load();
    {
        std::lock_guard lock(capture.mutex);
        capture.release = true;
        capture.block   = false;
    }
    capture.changed.notify_all();
    logging.join();
    unloading.join();
    CHECK(entered && !finishedWhileLoggerHeld && unloaded);
    CHECK(LLAndroidKernel_GetState() == LLAndroidKernel_Unloaded);
    return true;
}
} // namespace fixture

namespace ll::android {
KernelLifecycle& kernel() noexcept { return fixture::lifecycle; }
} // namespace ll::android
PL_REGISTER_MOD(ll::android::KernelLifecycle, fixture::lifecycle);

int main() {
    if (!fixture::lifecycleTests() || !fixture::failureTests() || !fixture::childFailureTests() || !fixture::logTests()
        || !fixture::concurrentLogReset())
        return 1;
#if defined(__aarch64__)
    std::puts("G3 AArch64 fixture passed: ABI, lifecycle, retention, context copy, logging and synchronized reset");
#else
    std::puts("G3 host fixture passed: ABI, lifecycle, retention, context copy, logging and synchronized reset");
#endif
    return 0;
}
