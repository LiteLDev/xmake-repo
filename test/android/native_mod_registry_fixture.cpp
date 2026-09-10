#include "ll/core/mod/NativeModRegistry.h"
#include <cstdio>
#include <string>
#include <vector>
using namespace ll::android;
namespace {
std::vector<std::string> calls;
bool                     valid{true};
struct FakeMod {
    EventRegistry* events{};
    char const*    id{};
    int            failure{}, closeCount{}, eventCount{}, loadCount{}, enableCount{}, disableCount{}, unloadCount{};
    uint64_t       token{};
    LLAndroidModRegistrationV1 registration{};
};
void output(int32_t, char const*) noexcept {}
void event(uint32_t, void const*, void* pointer) noexcept {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.eventCount;
    valid &= currentOwner().phase == ModPhase::Callback;
}
bool load(void* pointer, LLAndroidModContextV1 const* context) noexcept {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.loadCount;
    calls.push_back(std::string(value.id) + ":load");
    valid &= context && context->size == 56 && context->abiVersion == 1;
    valid &= currentOwner().phase == ModPhase::Load;
    valid &= value.events->subscribe(1, event, &value) == 0;
    return value.failure != 1 && value.failure != 6;
}
bool enable(void* pointer, LLAndroidModContextV1 const*) noexcept {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.enableCount;
    calls.push_back(std::string(value.id) + ":enable");
    value.token  = value.events->subscribe(1, event, &value);
    valid       &= value.token != 0;
    value.events->publish(1, nullptr);
    valid &= value.eventCount == 0; // staged subscriptions never run during enable
    return value.failure != 2 && value.failure != 7;
}
bool disable(void* pointer, LLAndroidModContextV1 const*) noexcept {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.disableCount;
    calls.push_back(std::string(value.id) + ":disable");
    if (value.failure == 3) return false;
    // An actual Mod must be able to cancel its token after publication closes.
    valid       &= value.events->unsubscribe(value.token);
    value.token  = 0;
    return true;
}
bool unload(void* pointer, LLAndroidModContextV1 const*) noexcept {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.unloadCount;
    calls.push_back(std::string(value.id) + ":unload");
    valid &= currentOwner().owner && currentOwner().owner->inFlight == 0;
    return value.failure != 4 && value.failure != 6 && value.failure != 7;
}
int close(void* pointer) {
    auto& value = *static_cast<FakeMod*>(pointer);
    ++value.closeCount;
    calls.push_back(std::string(value.id) + ":close");
    return value.failure == 5 ? -1 : 0;
}
std::unique_ptr<NativeModEntry> entry(FakeMod& value, uint64_t id) {
    value.registration  = {56, 1, 1, 0, &value, load, enable, disable, unload};
    auto item           = std::make_unique<NativeModEntry>();
    item->manifest.name = value.id;
    item->context       = {56, 1, nullptr, value.id, "/mods", "/mods/data", "/mods/config", "/mods/resources"};
    item->owner.id      = id;
    item->registration  = &value.registration;
    item->handle        = &value;
    item->close         = close;
    return item;
}
#define CHECK(expression)                                                                                              \
    do {                                                                                                               \
        if (!(expression)) {                                                                                           \
            std::fprintf(stderr, "mod fixture line %d: %s\n", __LINE__, #expression);                                  \
            return false;                                                                                              \
        }                                                                                                              \
    } while (false)
bool ordered() {
    calls.clear();
    EventRegistry     events;
    KernelContext     context;
    KernelLogger      logger(context, output);
    NativeModRegistry mods(events, logger);
    FakeMod           a{&events, "a"}, b{&events, "b"};
    CHECK(events.open());
    CHECK(mods.loadAndEnable(entry(a, 1)) && mods.loadAndEnable(entry(b, 2)));
    CHECK(a.eventCount == 1 && b.eventCount == 0); // b's enable can publish only to already-enabled a
    events.publish(1, nullptr);
    CHECK(a.eventCount == 2 && b.eventCount == 1 && mods.retained() == 2);
    CHECK(events.closeAndDrain() && mods.shutdown());
    CHECK(mods.clean() && events.clean() && a.closeCount == 1 && b.closeCount == 1);
    CHECK(
        (calls
         == std::vector<std::string>{
             "a:load",
             "a:enable",
             "b:load",
             "b:enable",
             "b:disable",
             "b:unload",
             "b:close",
             "a:disable",
             "a:unload",
             "a:close"
         })
    );
    CHECK(mods.shutdown() && a.closeCount == 1 && b.closeCount == 1);
    return true;
}
bool failures() {
    for (int failure = 1; failure <= 7; ++failure) {
        EventRegistry     events;
        KernelContext     context;
        KernelLogger      logger(context, output);
        NativeModRegistry mods(events, logger);
        FakeMod           value{&events, "failure", failure};
        CHECK(events.open());
        bool enabled = mods.loadAndEnable(entry(value, 1));
        CHECK(enabled == (failure >= 3 && failure <= 5));
        CHECK(events.closeAndDrain());
        bool cleaned = mods.shutdown();
        CHECK(cleaned == (failure <= 2));
        CHECK(mods.retained() == (failure <= 2 ? 0u : 1u));
        CHECK(mods.hasRetainedFailure() == (failure >= 3));
        CHECK(value.closeCount == (failure <= 2 || failure == 5 ? 1 : 0));
        CHECK(value.disableCount == (failure >= 3 && failure <= 5 ? 1 : 0));
        CHECK(value.unloadCount == (failure == 3 ? 0 : 1));
        auto before = calls.size();
        CHECK(mods.shutdown() == cleaned && calls.size() == before); // no failure lifecycle retries
        CHECK(events.stats().inFlight == 0 && events.stats().snapshots == 0);
        CHECK(events.stats().slots == (failure == 3 ? 1u : 0u));
    }
    return true;
}
} // namespace
int main() {
    if (!ordered() || !failures() || !valid) return 1;
    std::puts(
        "native registry passed: staged ownership, reverse cleanup, all four lifecycle failures, failed close and "
        "sticky retention"
    );
}
