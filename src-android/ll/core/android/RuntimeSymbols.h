#pragma once

#include "pl/SymbolProvider.h"

class Actor;
class ClientInstance;
class LocalPlayer;

namespace ll::android {
using ActorNormalTick   = void (*)(Actor*);
using ClientLocalPlayer = LocalPlayer* (*)(ClientInstance const*);

struct RuntimeTargets {
    ActorNormalTick   actor{};
    ClientLocalPlayer client{};
};

// The caller supplies only the public PL resolver. Fixtures substitute an owned
// function map; there is no Minecraft lookup fallback or persistent cache.
class RuntimeSymbols final {
public:
    explicit RuntimeSymbols(decltype(&pl::pl_resolve_symbol_n) resolve) : resolve(resolve) {}
    bool resolveTargets(RuntimeTargets& result) const noexcept;

private:
    decltype(&pl::pl_resolve_symbol_n) resolve;
};
} // namespace ll::android
