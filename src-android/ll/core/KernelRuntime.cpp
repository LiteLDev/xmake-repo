#include "ll/core/KernelLifecycle.h"
#include "ll/core/event/EventRegistry.h"
#include "ll/core/io/Output.h"
#include "ll/core/memory/HookTransaction.h"
#include "ll/core/mod/NativeModManager.h"
#include <atomic>
#include <cstdio>
#include <cstdlib>

namespace ll::android {
namespace {
thread_local uint32_t hookDepth{};
struct HookScope {
    HookScope() { ++hookDepth; }
    ~HookScope() { --hookDepth; }
};
void         actorDetour(Actor*) noexcept;
LocalPlayer* clientDetour(ClientInstance const*) noexcept;

class AndroidRuntime final : public RuntimeOperations {
public:
    AndroidRuntime(KernelContext& context, KernelLogger& logger) : logger(logger), mods(context, events, logger) {}
    bool enable() noexcept override {
        if (!mods.prepare()) {
            logger.write(LLAndroidLog_Error, "LeviLamina: private loader preparation failed");
            return false;
        }
        if (!hooks.configure(pl_get_guarded_hook_api_v1())) return false;
        RuntimeTargets targets;
        RuntimeSymbols resolver(pl::pl_resolve_symbol_n);
        if (!resolver.resolveTargets(targets)) {
            logger.write(LLAndroidLog_Error, "LeviLamina: ActorNormalTick/ClientLocalPlayer resolution failed");
            return false;
        }
        if (!hooks.install(targets, {actorDetour, clientDetour})) {
            logger.write(LLAndroidLog_Error, "LeviLamina: guarded Hook transaction failed");
            return false;
        }
        if (!events.open()) {
            hooks.remove();
            return false;
        }
        actorCalls     = 0;
        clientCalls    = 0;
        nonNullPlayers = 0;
        logger.write(LLAndroidLog_Info, "LeviLamina: ActorNormalTick/ClientLocalPlayer guarded bindings ready");
        return true;
    }
    bool enableChildren() noexcept override { return mods.loadAllMods(); }
    bool disable() noexcept override {
        if (!events.closeAndDrain()) {
            logger.write(LLAndroidLog_Error, "LeviLamina: event drain timed out; resources retained");
            return false;
        }
        bool                 children = mods.shutdown();
        bool                 detached = hooks.remove();
        PLGuardedHookStateV1 guarded{sizeof(guarded), 1, 0, 0, 0, 0, 0};
        auto                 api        = pl_get_guarded_hook_api_v1();
        bool                 queried    = api && api->query(0, &guarded) == PLGuardedHook_Ok;
        auto                 eventState = events.stats();
        char                 text[384];
        int                  size = std::snprintf(
            text,
            sizeof(text),
            "LeviLamina: final actor=%llu client=%llu nonNullPlayer=%llu childHandles=%zu listeners=%zu callbacks=%zu "
                             "snapshots=%zu; guarded retirement=%s",
            static_cast<unsigned long long>(actorCalls.load()),
            static_cast<unsigned long long>(clientCalls.load()),
            static_cast<unsigned long long>(nonNullPlayers.load()),
            mods.retained(),
            eventState.slots,
            eventState.inFlight,
            eventState.snapshots,
            detached ? "ok" : "failed"
        );
        if (size > 0 && static_cast<size_t>(size) < sizeof(text))
            logger.write(LLAndroidLog_Info, text, static_cast<size_t>(size));
        size = std::snprintf(
            text,
            sizeof(text),
            "LeviLamina: PL guarded summary query=%s bindings=%llu inFlight=%llu resident=%llu",
            queried ? "ok" : "failed",
            static_cast<unsigned long long>(guarded.ownerBindings),
            static_cast<unsigned long long>(guarded.inFlight),
            static_cast<unsigned long long>(guarded.residentGateways)
        );
        if (size > 0 && static_cast<size_t>(size) < sizeof(text))
            logger.write(LLAndroidLog_Info, text, static_cast<size_t>(size));
        return children && detached && events.clean() && queried && !guarded.ownerBindings && !guarded.inFlight;
    }
    bool     clean() const noexcept override { return hooks.clean() && events.clean() && mods.clean(); }
    bool     inCallback() const noexcept override { return hookDepth != 0 || currentOwner().callbackToken != 0; }
    uint64_t subscribe(uint32_t kind, LLAndroidEventCallback callback, void* data) noexcept override {
        return events.subscribe(kind, callback, data);
    }
    bool                  unsubscribe(uint64_t token) noexcept override { return events.unsubscribe(token); }
    void                  reset() noexcept override { mods.reset(); }
    KernelLogger&         logger;
    EventRegistry         events;
    HookTransaction       hooks;
    NativeModManager      mods;
    std::atomic<uint64_t> actorCalls{}, clientCalls{}, nonNullPlayers{};
};
struct Runtime {
    KernelContext   context{platformLogMirror()};
    KernelLogger    logger{context, fallbackLog};
    AndroidRuntime  operations{context, logger};
    KernelLifecycle lifecycle{context, logger, operations};
};
Runtime& runtime() noexcept {
    static Runtime value;
    return value;
}
void actorDetour(Actor* actor) noexcept {
    HookScope scope;
    auto&     operations = runtime().operations;
    auto      origin     = operations.hooks.actorOrigin();
    if (!origin) std::abort();
    origin(actor);
    operations.actorCalls.fetch_add(1, std::memory_order_relaxed);
    LLAndroidActorNormalTickAfterV1 payload{sizeof(payload), 1, actor};
    operations.events.publish(LLAndroidEvent_ActorNormalTickAfter, &payload);
}
LocalPlayer* clientDetour(ClientInstance const* client) noexcept {
    HookScope scope;
    auto&     operations = runtime().operations;
    auto      origin     = operations.hooks.clientOrigin();
    if (!origin) std::abort();
    auto player = origin(client);
    operations.clientCalls.fetch_add(1, std::memory_order_relaxed);
    if (player) operations.nonNullPlayers.fetch_add(1, std::memory_order_relaxed);
    LLAndroidClientInstanceLocalPlayerAfterV1 payload{sizeof(payload), 1, client, player};
    operations.events.publish(LLAndroidEvent_ClientInstanceLocalPlayerAfter, &payload);
    return player;
}
} // namespace
KernelLifecycle& kernel() noexcept { return runtime().lifecycle; }
} // namespace ll::android
