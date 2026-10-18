#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorDataFlagComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct HorseFlagComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MoveRequestComponent;
struct MovedOnSpawnComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace VanillaSystems {

struct MoveSpeedCapSystem {};

} // namespace VanillaSystems
