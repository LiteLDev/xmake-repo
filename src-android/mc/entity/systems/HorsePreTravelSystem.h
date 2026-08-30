#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct HorseFlagComponent;
struct HorseWasOnGroundPreTravelComponent;
struct InterpolateMovementNeededComponent;
struct MobFlagComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class HorsePreTravelSystem {
public:
    // HorsePreTravelSystem inner types define
    using MainViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, HorseFlagComponent>,
        Optional<VehicleComponent>,
        const ActorDataFlagComponent,
        AirSpeedComponent>;

    using MobViewType = ::ViewT<StrictEntityContext, const MobFlagComponent>;

    using OnGroundViewType = ::ViewT<StrictEntityContext, const OnGroundFlagComponent>;

    using ModType = ::EntityModifier<HorseWasOnGroundPreTravelComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createHorsePreTravelSystem();
    // NOLINTEND
};
