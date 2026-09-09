#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

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
struct MobTravelComponent;
struct MovedOnSpawnComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

struct MobTravelImmobileFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
