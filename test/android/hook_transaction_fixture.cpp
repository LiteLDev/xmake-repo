#include "ll/core/memory/HookTransaction.h"
#include <array>
#include <bit>
#include <cstdio>
#include <string_view>
#include <type_traits>
using namespace ll::android;
static_assert(std::is_same_v<ActorNormalTick, void (*)(Actor*)>);
static_assert(std::is_same_v<ClientLocalPlayer, LocalPlayer* (*)(ClientInstance const*)>);
static_assert(!std::is_move_constructible_v<HookTransaction>);
static_assert(sizeof(PLGuardedHookApiV1) == 32 && sizeof(PLGuardedHookSpecV1) == 40);
namespace {
#define CHECK(expr)                                                                                                    \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "guarded adapter line %d: %s\n", __LINE__, #expr);                                    \
            return false;                                                                                              \
        }                                                                                                              \
    } while (false)
void           actorTarget(Actor*) {}
LocalPlayer*   clientTarget(ClientInstance const*) { return nullptr; }
void           actorDetour(Actor*) {}
LocalPlayer*   clientDetour(ClientInstance const*) { return nullptr; }
RuntimeTargets targets{actorTarget, clientTarget}, detours{actorDetour, clientDetour};
struct Backend {
    int  resolves{}, failResolve{}, installs{}, failInstall{}, nullOrigin{}, failRetire{}, retires{}, queries{};
    bool duplicate{}, badSpec{}, reservation{}, queryFailure{};
    std::array<void**, 2>   origins{};
    std::array<uint64_t, 4> order{};
} backend;
void* resolve(char const* name, size_t size) {
    int index        = ++backend.resolves;
    backend.badSpec |= std::string_view(name, size)
                    != (index == 1 ? "_ZN5Actor10normalTickEv" : "_ZNK14ClientInstance14getLocalPlayerEv");
    if (index == backend.failResolve) return nullptr;
    return index == 1 || backend.duplicate ? std::bit_cast<void*>(&actorTarget) : std::bit_cast<void*>(&clientTarget);
}
int32_t install(PLGuardedHookSpecV1 const* spec, uint64_t* handle) noexcept {
    int index        = ++backend.installs;
    backend.badSpec |= spec->size != 40 || spec->abiVersion != 1 || spec->callKind != static_cast<uint32_t>(index)
                    || spec->priority != 200;
    if (index == backend.failInstall) return PLGuardedHook_BackendFailure;
    *handle                    = static_cast<uint64_t>(index);
    backend.origins[index - 1] = spec->originSlot;
    *spec->originSlot          = index == backend.nullOrigin ? nullptr : spec->target;
    return PLGuardedHook_Ok;
}
int32_t retire(uint64_t handle) noexcept {
    backend.order[backend.retires++] = handle;
    if (handle == static_cast<uint64_t>(backend.failRetire)) return PLGuardedHook_Timeout;
    *backend.origins[handle - 1] = nullptr;
    return PLGuardedHook_Ok;
}
int32_t query(uint64_t handle, PLGuardedHookStateV1* state) noexcept {
    ++backend.queries;
    backend.badSpec      |= handle != 0 || state->size != 40 || state->abiVersion != 1;
    state->ownerBindings  = backend.reservation ? 1 : 0;
    return backend.queryFailure ? PLGuardedHook_InvalidState : PLGuardedHook_Ok;
}
PLGuardedHookApiV1 api{32, 1, install, retire, query};
bool               resolverTests() {
    RuntimeTargets result;
    for (int failure : {1, 2}) {
        backend             = {};
        backend.failResolve = failure;
        CHECK(!RuntimeSymbols(resolve).resolveTargets(result) && !result.actor && !result.client);
        CHECK(backend.resolves == failure && !backend.badSpec);
    }
    backend = {};
    CHECK(
        RuntimeSymbols(resolve).resolveTargets(result) && result.actor == actorTarget && result.client == clientTarget
    );
    CHECK(!backend.badSpec);
    backend           = {};
    backend.duplicate = true;
    CHECK(!RuntimeSymbols(resolve).resolveTargets(result) && !result.actor && !result.client);
    CHECK(!RuntimeSymbols(nullptr).resolveTargets(result));
    return true;
}
bool transactions() {
    backend = {};
    HookTransaction value;
    CHECK(!value.configure(nullptr) && !value.install(targets, detours));
    auto bad       = api;
    bad.abiVersion = 2;
    CHECK(!value.configure(&bad));
    bad      = api;
    bad.size = 40;
    CHECK(!value.configure(&bad));
    bad        = api;
    bad.retire = nullptr;
    CHECK(!value.configure(&bad));
    CHECK(value.configure(&api));
    CHECK(!value.install({}, detours) && !value.install(targets, {}) && !value.install(targets, targets));
    CHECK(value.install(targets, detours) && !value.configure(&api));
    CHECK(!value.clean() && value.actorOrigin() == actorTarget && value.clientOrigin() == clientTarget);
    CHECK(!value.install(targets, detours) && backend.installs == 2 && !backend.badSpec);
    CHECK(value.remove() && value.clean() && backend.order[0] == 2 && backend.order[1] == 1);
    CHECK(value.remove() && backend.retires == 2);
    for (int failure : {1, 2}) {
        backend             = {};
        backend.failInstall = failure;
        CHECK(!value.install(targets, detours) && value.clean());
        CHECK(backend.installs == failure && backend.retires == failure - 1);
        backend            = {};
        backend.nullOrigin = failure;
        CHECK(!value.install(targets, detours) && value.clean());
        CHECK(backend.retires == failure && backend.order[0] == static_cast<uint64_t>(failure));
    }
    for (int failure : {1, 2}) {
        backend = {};
        HookTransaction retained;
        CHECK(retained.configure(&api) && retained.install(targets, detours));
        backend.failRetire = failure;
        CHECK(!retained.remove() && !retained.clean() && retained.lastError() == PLGuardedHook_Timeout);
        CHECK(backend.order[0] == 2 && backend.order[1] == 1);
        CHECK((retained.actorOrigin() != nullptr) == (failure == 1));
        CHECK((retained.clientOrigin() != nullptr) == (failure == 2));
        CHECK(!retained.configure(&api)); // fake storage only; production must retain its SO
    }
    for (bool failedQuery : {false, true}) {
        backend              = {};
        backend.failInstall  = 1;
        backend.reservation  = !failedQuery;
        backend.queryFailure = failedQuery;
        HookTransaction retained;
        CHECK(retained.configure(&api) && !retained.install(targets, detours));
        CHECK(!retained.clean() && !retained.remove() && backend.queries == 1);
    }
    return true;
}
} // namespace
int main() {
    if (!resolverTests() || !transactions()) return 1;
    std::puts(
        "guarded adapter passed: exact two symbols, typed stable origins, V1 refusal, reverse rollback and retained "
        "ownership"
    );
}
