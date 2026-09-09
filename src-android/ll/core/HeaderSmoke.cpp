#include "ll/core/CompilationContract.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/player/LocalPlayer.h"
#include "mc/world/actor/Actor.h"

#include <cstddef>

static_assert(sizeof(Actor) == 912);
static_assert(sizeof(ClientInstance) == 3296);

namespace ll::android::detail {

// A defined, hidden symbol also gives the P5 object scanner a concrete input.
// This function evaluates only type sizes; it never calls Minecraft.
std::size_t headerSmokeSize() noexcept { return sizeof(Actor) + sizeof(ClientInstance) + sizeof(LocalPlayer); }

} // namespace ll::android::detail
