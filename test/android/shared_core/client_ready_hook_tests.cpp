// Runs the production Android adapter with owned PL callbacks. No MC function
// is called; real Header types verify the function signature at compile time.
#include "ClientLifecycle.h"
#include "KernelLifecycle.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/game/SerialWorkList.h"
#include "pl/Hook.h"
#include "pl/SymbolProvider.h"

#include <bit>
#include <cstdio>
#include <stdexcept>
#include <string_view>

namespace {
using Result   = SerialWorkList::WorkResult;
using Context  = std::shared_ptr<MinecraftGame::InitContext>;
using Function = Result (*)(MinecraftGame*, Context&);
std::string_view mode;
int              resolves{}, installs{}, readyCalls{}, originCalls{};
void*            capturedDetour{};
void**           capturedOrigin{};
MinecraftGame*   expectedGame{};
Context*         expectedContext{};
Result           expectedResult{};
#define CHECK(...)                                                                                                     \
    do {                                                                                                               \
        if (!(__VA_ARGS__)) {                                                                                          \
            std::fprintf(stderr, "FAIL %d: %s\n", __LINE__, #__VA_ARGS__);                                             \
            std::abort();                                                                                              \
        }                                                                                                              \
    } while (false)
Result original(MinecraftGame* game, Context& context) {
    CHECK(game == expectedGame && &context == expectedContext);
    CHECK(readyCalls == originCalls + 1);
    ++originCalls;
    return expectedResult;
}
Result replacementOrigin(MinecraftGame* game, Context& context) { return original(game, context); }
} // namespace

namespace ll::android {
KernelLifecycle& kernel() noexcept {
    static KernelLifecycle value;
    return value;
}
void KernelLifecycle::gameReady() noexcept { ++readyCalls; }
} // namespace ll::android
namespace pl::inline symbol_provider {
void* pl_resolve_symbol_n(char const* name, size_t length) {
    ++resolves;
    CHECK(
        std::string_view(name, length) == "_ZN13MinecraftGame11_initFinishERNSt6__ndk110shared_ptrINS_11InitContextEEE"
    );
    return mode == "missing" ? nullptr : std::bit_cast<void*>(&original);
}
} // namespace pl::inline symbol_provider
namespace pl::inline hook {
int pl_hook(FuncPtr target, FuncPtr detour, FuncPtr* origin, Priority priority) {
    ++installs;
    CHECK(target == std::bit_cast<void*>(&original) && priority == PriorityHigh);
    CHECK(detour && origin);
    capturedDetour = detour;
    capturedOrigin = origin;
    if (mode == "backend-failure") return 5;
    *origin = mode == "null-origin" ? nullptr : target;
    return 0;
}
} // namespace pl::inline hook

int main(int argc, char** argv) {
    mode    = argc > 1 ? argv[1] : "success";
    auto ok = ll::android::installClientReadyHook();
    CHECK(ok == (mode == "success"));
    CHECK(ll::android::installClientReadyHook() == ok && resolves == 1);
    CHECK(installs == ((mode == "missing") ? 0 : 1));
    if (ok) {
        Context context;
        expectedContext = &context;
        // Opaque fixture value, never dereferenced by adapter or owned origin.
        expectedGame   = reinterpret_cast<MinecraftGame*>(&context);
        auto detour    = std::bit_cast<Function>(capturedDetour);
        expectedResult = static_cast<Result>(0);
        CHECK(detour(expectedGame, context) == static_cast<Result>(0));
        *capturedOrigin = std::bit_cast<void*>(&replacementOrigin);
        expectedResult  = static_cast<Result>(1);
        CHECK(detour(expectedGame, context) == static_cast<Result>(1));
        CHECK(readyCalls == 2 && originCalls == 2);
    }
    std::printf("Ready Hook owned fixture: %.*s passed\n", static_cast<int>(mode.size()), mode.data());
}
