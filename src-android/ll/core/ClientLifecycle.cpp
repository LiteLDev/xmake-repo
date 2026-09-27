#include "ClientLifecycle.h"
#include "KernelLifecycle.h"

#include "mc/client/game/MinecraftGame.h"
#include "mc/client/game/SerialWorkList.h"
#include "pl/Hook.h"
#include "pl/SymbolProvider.h"

#include <bit>
#include <cstdlib>
#include <type_traits>

namespace ll::android {
namespace {
using WorkResult    = SerialWorkList::WorkResult;
using InitContext   = std::shared_ptr<MinecraftGame::InitContext>;
using ReadyMethod   = WorkResult (MinecraftGame::*)(InitContext&);
using ReadyFunction = WorkResult (*)(MinecraftGame*, InitContext&);
static_assert(std::is_same_v<decltype(&MinecraftGame::_initFinish), ReadyMethod>);

// Use the real MC entry from PL, never a P5 lazy-import thunk as a Hook target.
constexpr char readySymbol[] = "_ZN13MinecraftGame11_initFinishERNSt6__ndk110shared_ptrINS_11InitContextEEE";
void*          readyOrigin{};
bool           installAttempted{};
bool           installed{};

WorkResult readyDetour(MinecraftGame* game, InitContext& context) {
    auto origin = std::bit_cast<ReadyFunction>(readyOrigin);
    if (!origin) std::abort();
    // Same ordering as the original Windows client: enable, Running, origin.
    kernel().gameReady();
    return origin(game, context);
}
} // namespace

bool installClientReadyHook() noexcept try {
    // KernelLifecycle serializes entry into this startup-only operation.
    if (installAttempted) return installed;
    installAttempted = true;
    auto target      = pl::pl_resolve_symbol_n(readySymbol, sizeof(readySymbol) - 1);
    if (!target) return false;
    installed = pl::hook::pl_hook(target, std::bit_cast<void*>(&readyDetour), &readyOrigin, pl::hook::PriorityHigh) == 0
             && readyOrigin;
    return installed;
} catch (...) {
    return false;
}
} // namespace ll::android
