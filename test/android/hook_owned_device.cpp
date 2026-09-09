#include "ll/core/memory/HookTransaction.h"

#include <bit>
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <unistd.h>

// These fixture-owned types/functions have no Minecraft layout or behavior.
class Actor {
public:
    int calls{};
};
class LocalPlayer {};
class ClientInstance {
public:
    LocalPlayer* value{};
};

namespace {
using namespace ll::android;
HookTransaction* transaction{};
bool             inOwnedCall{};
int              actorAfter{}, clientAfter{};
struct Scope final : HookQuiescence {
    bool held() const noexcept override { return !inOwnedCall; }
} scope;

// There is one thread, no callbacks/threads retain these private entries, and
// call sites set inOwnedCall around the complete synchronous call. Installation
// and removal run strictly between calls; no Minecraft entry uses this proof.
__attribute__((noinline)) void         actorTarget(Actor* actor) { ++actor->calls; }
__attribute__((noinline)) LocalPlayer* clientTarget(ClientInstance const* client) { return client->value; }
void                                   actorDetour(Actor* actor) {
    auto origin = transaction->actorOrigin();
    if (!origin) std::abort();
    origin(actor);
    ++actorAfter;
}
LocalPlayer* clientDetour(ClientInstance const* client) {
    auto origin = transaction->clientOrigin();
    if (!origin) std::abort();
    auto result = origin(client);
    ++clientAfter;
    return result;
}
} // namespace

#define REQUIRE(expr)                                                                                                  \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "owned hook probe failed line %d\n", __LINE__);                                       \
            return 1;                                                                                                  \
        }                                                                                                              \
    } while (false)

int main(int argc, char** argv) {
    REQUIRE(argc == 2);
    void* provider = dlopen(argv[1], RTLD_NOW | RTLD_LOCAL);
    if (!provider) {
        std::fprintf(stderr, "provider dlopen: %s\n", dlerror());
        return 1;
    }
    auto hook   = reinterpret_cast<decltype(&pl::pl_hook)>(dlsym(provider, "pl_hook"));
    auto unhook = reinterpret_cast<decltype(&pl::pl_unhook)>(dlsym(provider, "pl_unhook"));
    REQUIRE(hook && unhook);
    HookTransaction value(hook, unhook);
    transaction = &value;
    Actor          actor;
    LocalPlayer    player;
    ClientInstance client{&player};
    ActorNormalTick volatile actorEntry    = actorTarget;
    ClientLocalPlayer volatile clientEntry = clientTarget;
    REQUIRE(value.install({actorTarget, clientTarget}, {actorDetour, clientDetour}, scope));
    inOwnedCall = true;
    actorEntry(&actor);
    REQUIRE(clientEntry(&client) == &player);
    client.value = nullptr;
    REQUIRE(clientEntry(&client) == nullptr);
    inOwnedCall = false;
    REQUIRE(actor.calls == 1 && actorAfter == 1 && clientAfter == 2);
    REQUIRE(value.remove(scope) && value.clean());
    REQUIRE(!value.actorOrigin() && !value.clientOrigin());
    inOwnedCall = true;
    actorEntry(&actor);
    REQUIRE(clientEntry(&client) == nullptr);
    inOwnedCall = false;
    REQUIRE(actor.calls == 2 && actorAfter == 1 && clientAfter == 2);
    REQUIRE(dlclose(provider) == 0);
    std::printf(
        "G4 owned AArch64 functions passed (PID %d): real PL hooks, typed origins, null return, reverse removal; no "
        "Minecraft\n",
        getpid()
    );
    return 0;
}
