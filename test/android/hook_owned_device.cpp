#include "ll/core/memory/RuntimeSymbols.h"
#include "pl/Hook.h"

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
void* actorOrigin{};
void* clientOrigin{};
bool  inOwnedCall{};
int   actorAfter{}, clientAfter{};

// There is one thread, no callbacks/threads retain these private entries, and
// call sites set inOwnedCall around the complete synchronous call. Installation
// and removal run strictly between calls; no Minecraft entry uses this proof.
__attribute__((noinline)) void         actorTarget(Actor* actor) { ++actor->calls; }
__attribute__((noinline)) LocalPlayer* clientTarget(ClientInstance const* client) { return client->value; }
void                                   actorDetour(Actor* actor) {
    auto origin = std::bit_cast<ActorNormalTick>(actorOrigin);
    if (!origin) std::abort();
    origin(actor);
    ++actorAfter;
}
LocalPlayer* clientDetour(ClientInstance const* client) {
    auto origin = std::bit_cast<ClientLocalPlayer>(clientOrigin);
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
    Actor          actor;
    LocalPlayer    player;
    ClientInstance client{&player};
    ActorNormalTick volatile actorEntry    = actorTarget;
    ClientLocalPlayer volatile clientEntry = clientTarget;
    REQUIRE(!inOwnedCall);
    REQUIRE(
        hook(std::bit_cast<void*>(&actorTarget), std::bit_cast<void*>(&actorDetour), &actorOrigin, pl::PriorityNormal)
        == 0
    );
    REQUIRE(
        hook(std::bit_cast<void*>(&clientTarget), std::bit_cast<void*>(&clientDetour), &clientOrigin, pl::PriorityNormal)
        == 0
    );
    inOwnedCall = true;
    actorEntry(&actor);
    REQUIRE(clientEntry(&client) == &player);
    client.value = nullptr;
    REQUIRE(clientEntry(&client) == nullptr);
    inOwnedCall = false;
    REQUIRE(actor.calls == 1 && actorAfter == 1 && clientAfter == 2);
    REQUIRE(!inOwnedCall);
    REQUIRE(unhook(std::bit_cast<void*>(&clientTarget), std::bit_cast<void*>(&clientDetour)));
    REQUIRE(unhook(std::bit_cast<void*>(&actorTarget), std::bit_cast<void*>(&actorDetour)));
    REQUIRE(!actorOrigin && !clientOrigin);
    inOwnedCall = true;
    actorEntry(&actor);
    REQUIRE(clientEntry(&client) == nullptr);
    inOwnedCall = false;
    REQUIRE(actor.calls == 2 && actorAfter == 1 && clientAfter == 2);
    REQUIRE(dlclose(provider) == 0);
    std::printf(
        "Legacy API owned AArch64 functions passed (PID %d): real PL hooks, typed origins, null return, reverse "
        "removal; no "
        "Minecraft\n",
        getpid()
    );
    return 0;
}
