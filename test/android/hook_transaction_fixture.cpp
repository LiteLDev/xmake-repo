#include "ll/core/android/HookTransaction.h"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <type_traits>

using namespace ll::android;
static_assert(std::is_same_v<ActorNormalTick, void (*)(Actor*)>);
static_assert(std::is_same_v<ClientLocalPlayer, LocalPlayer* (*)(ClientInstance const*)>);
static_assert(!std::is_move_constructible_v<HookTransaction>);

#define CHECK(expr)                                                                                                    \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "hook fixture failed line %d: %s\n", __LINE__, #expr);                                \
            return false;                                                                                              \
        }                                                                                                              \
    } while (false)

namespace {
void           actorTarget(Actor*) {}
LocalPlayer*   clientTarget(ClientInstance const*) { return nullptr; }
void           actorDetour(Actor*) {}
LocalPlayer*   clientDetour(ClientInstance const*) { return nullptr; }
RuntimeTargets targets{actorTarget, clientTarget}, detours{actorDetour, clientDetour};

struct Scope final : HookQuiescence {
    bool active{true};
    bool held() const noexcept override { return active; }
} scope;

struct Backend {
    int                         resolves{}, failResolve{}, hooks{}, failHook{}, nullOrigin{}, unhooks{}, failUnhook{};
    bool                        duplicateTarget{}, badPriority{}, badName{};
    std::array<pl::FuncPtr*, 2> slots{};
    std::array<int, 4>          order{};
} backend;

void* resolve(char const* text, size_t size) {
    int         index     = ++backend.resolves;
    char const* expected  = index == 1 ? "_ZN5Actor10normalTickEv" : "_ZNK14ClientInstance14getLocalPlayerEv";
    backend.badName      |= size != std::strlen(expected) || std::memcmp(text, expected, size) != 0;
    if (index == backend.failResolve) return nullptr;
    if (index == 1 || backend.duplicateTarget) return std::bit_cast<void*>(&actorTarget);
    return std::bit_cast<void*>(&clientTarget);
}
int hook(pl::FuncPtr target, pl::FuncPtr, pl::FuncPtr* origin, pl::Priority priority) {
    auto index           = ++backend.hooks;
    backend.badPriority |= priority != pl::PriorityNormal;
    if (index == backend.failHook) return 1;
    backend.slots[index - 1] = origin;
    *origin                  = index == backend.nullOrigin ? nullptr : target;
    return 0;
}
bool unhook(pl::FuncPtr target, pl::FuncPtr) {
    int index                        = target == std::bit_cast<void*>(&actorTarget) ? 1 : 2;
    backend.order[backend.unhooks++] = index;
    if (index == backend.failUnhook) return false;
    if (backend.slots[index - 1]) *backend.slots[index - 1] = nullptr;
    return true;
}

bool resolverTests() {
    RuntimeSymbols symbols(resolve);
    for (int failure : {1, 2}) {
        backend             = {};
        backend.failResolve = failure;
        auto result         = targets;
        CHECK(!symbols.resolveTargets(result));
        CHECK(!result.actor && !result.client && backend.resolves == failure && !backend.badName);
    }
    backend = {};
    RuntimeTargets result;
    CHECK(symbols.resolveTargets(result));
    CHECK(result.actor == targets.actor && result.client == targets.client && !backend.badName);
    backend                 = {};
    backend.duplicateTarget = true;
    CHECK(!symbols.resolveTargets(result) && !result.actor && !result.client);
    CHECK(!RuntimeSymbols(nullptr).resolveTargets(result));
    return true;
}

bool transactionTests() {
    backend = {};
    HookTransaction transaction(hook, unhook);
    scope.active = false;
    CHECK(!transaction.install(targets, detours, scope) && backend.hooks == 0);
    scope.active = true;
    CHECK(!transaction.install({}, detours, scope));
    CHECK(!transaction.install(targets, {}, scope));
    CHECK(!transaction.install(targets, targets, scope));
    CHECK(transaction.install(targets, detours, scope));
    CHECK(!transaction.clean() && backend.hooks == 2 && !backend.badPriority);
    CHECK(transaction.actorOrigin() == actorTarget && transaction.clientOrigin() == clientTarget);
    CHECK(!transaction.install(targets, detours, scope) && backend.hooks == 2);
    // Public PL may rewrite the stable member slots while the owner is quiescent.
    *backend.slots[0] = std::bit_cast<void*>(&actorDetour);
    CHECK(transaction.actorOrigin() == actorDetour);
    scope.active = false;
    CHECK(!transaction.remove(scope) && backend.unhooks == 0 && !transaction.clean());
    scope.active = true;
    CHECK(transaction.remove(scope) && transaction.clean());
    CHECK(backend.order[0] == 2 && backend.order[1] == 1);
    CHECK(!transaction.actorOrigin() && !transaction.clientOrigin());
    CHECK(transaction.remove(scope) && backend.unhooks == 2);

    for (int failure : {1, 2}) {
        backend          = {};
        backend.failHook = failure;
        CHECK(!transaction.install(targets, detours, scope) && transaction.clean());
        CHECK(backend.hooks == failure && backend.unhooks == failure - 1);
        if (failure == 2) CHECK(backend.order[0] == 1);
        backend            = {};
        backend.nullOrigin = failure;
        CHECK(!transaction.install(targets, detours, scope) && transaction.clean());
        CHECK(backend.unhooks == failure && backend.order[0] == failure);
    }
    backend            = {};
    backend.nullOrigin = 2;
    backend.failUnhook = 2;
    CHECK(!transaction.install(targets, detours, scope) && !transaction.clean());
    CHECK(backend.order[0] == 2 && backend.order[1] == 1 && !transaction.actorOrigin());
    // Fixture owns this residual state and keeps the transaction alive until its
    // fake backend is explicitly repaired. Production cannot depend on retries.
    backend.failUnhook = 0;
    CHECK(transaction.remove(scope) && transaction.clean());
    backend = {};
    CHECK(transaction.install(targets, detours, scope));
    backend.failUnhook = 1;
    CHECK(!transaction.remove(scope) && !transaction.clean());
    CHECK(transaction.actorOrigin() && !transaction.clientOrigin());
    backend.failUnhook = 0;
    CHECK(transaction.remove(scope) && transaction.clean());
    return true;
}
} // namespace

int main() {
    if (!resolverTests() || !transactionTests()) return 1;
    std::puts(
        "G4 fake backend passed: exact resolver, typed slots, quiescence refusal, rollback and retained failures"
    );
    return 0;
}
