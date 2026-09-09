#include "ll/core/android/RuntimeSymbols.h"
#include <bit>

namespace ll::android {
bool RuntimeSymbols::resolveTargets(RuntimeTargets& result) const noexcept {
    result = {};
    if (!resolve) return false;
    constexpr char actorName[]  = "_ZN5Actor10normalTickEv";
    constexpr char clientName[] = "_ZNK14ClientInstance14getLocalPlayerEv";
    auto           actor        = resolve(actorName, sizeof(actorName) - 1);
    if (!actor) return false;
    auto client = resolve(clientName, sizeof(clientName) - 1);
    if (!client || actor == client) return false;
    result = {std::bit_cast<ActorNormalTick>(actor), std::bit_cast<ClientLocalPlayer>(client)};
    return true;
}
} // namespace ll::android
