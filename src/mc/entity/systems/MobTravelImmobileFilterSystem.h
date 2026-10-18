#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
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
struct MobTravelComponent;
struct MovedOnSpawnComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct VehicleInputIntentComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MobTravelImmobileFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create();
#endif // @header-generator platform
    // NOLINTEND
};
