#include "ll/api/android/Mod.hpp"
#include <atomic>
#include <cstdio>

namespace {
std::atomic<uint64_t> actorCalls{}, clientCalls{}, nonNullCalls{};
uint64_t              actorToken{}, clientToken{};
void                  actor(uint32_t kind, void const* raw, void*) noexcept {
    auto* value = static_cast<LLAndroidActorNormalTickAfterV1 const*>(raw);
    if (kind != LLAndroidEvent_ActorNormalTickAfter || !value || value->size != sizeof(*value) || value->version != 1)
        return;
    if (actorCalls.fetch_add(1, std::memory_order_relaxed) == 0) {
        constexpr char text[] = "LeviLaminaP6Example: first ActorNormalTickAfter";
        LLAndroidKernel_Log(LLAndroidLog_Info, text, sizeof(text) - 1);
    }
}
void client(uint32_t kind, void const* raw, void*) noexcept {
    auto* value = static_cast<LLAndroidClientInstanceLocalPlayerAfterV1 const*>(raw);
    if (kind != LLAndroidEvent_ClientInstanceLocalPlayerAfter || !value || value->size != sizeof(*value)
        || value->version != 1)
        return;
    clientCalls.fetch_add(1, std::memory_order_relaxed);
    if (value->localPlayer && nonNullCalls.fetch_add(1, std::memory_order_relaxed) == 0) {
        constexpr char text[] = "LeviLaminaP6Example: first non-null ClientInstanceLocalPlayerAfter";
        LLAndroidKernel_Log(LLAndroidLog_Info, text, sizeof(text) - 1);
    }
}
class Example {
public:
    bool load(ll::android::mod::ModContext const& context) noexcept {
        context.log(LLAndroidLog_Info, "LeviLaminaP6Example: load");
        return !context.id().empty();
    }
    bool enable() noexcept {
        if (LLAndroidKernel_GetApiVersion() != 1 || LLAndroidKernel_GetState() != LLAndroidKernel_Enabled) return false;
        actorCalls   = 0;
        clientCalls  = 0;
        nonNullCalls = 0;
        actorToken   = LLAndroidKernel_Subscribe(LLAndroidEvent_ActorNormalTickAfter, actor, nullptr);
        if (!actorToken) return false;
        clientToken = LLAndroidKernel_Subscribe(LLAndroidEvent_ClientInstanceLocalPlayerAfter, client, nullptr);
        if (!clientToken) {
            if (LLAndroidKernel_Unsubscribe(actorToken)) actorToken = 0;
            return false;
        }
        return true;
    }
    bool disable() noexcept {
        bool clean = true;
        if (clientToken) {
            if (LLAndroidKernel_Unsubscribe(clientToken)) clientToken = 0;
            else clean = false;
        }
        if (actorToken) {
            if (LLAndroidKernel_Unsubscribe(actorToken)) actorToken = 0;
            else clean = false;
        }
        char text[192];
        int  size = std::snprintf(
            text,
            sizeof(text),
            "LeviLaminaP6Example: final actor=%llu client=%llu nonNullPlayer=%llu",
            static_cast<unsigned long long>(actorCalls.load()),
            static_cast<unsigned long long>(clientCalls.load()),
            static_cast<unsigned long long>(nonNullCalls.load())
        );
        if (size > 0 && static_cast<size_t>(size) < sizeof(text))
            LLAndroidKernel_Log(LLAndroidLog_Info, text, static_cast<size_t>(size));
        return clean;
    }
    bool unload() noexcept { return !actorToken && !clientToken; }
};
Example example;
} // namespace
LL_REGISTER_MOD(Example, example);
