#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class StrictEntityContext;
class Vec3;
template<typename... T0> class Include;
struct CurrentTickComponent;
struct InterpolateMovementNeededComponent;
struct PassengerRenderingRidingOffsetComponent;
struct RidingOffsetInterpolationPair;
struct Tick;
struct TickingSystemWithInfo;
struct VehicleComponent;
struct VehicleRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickEntity(
        ::StrictEntityContext const&,
        ::VehicleComponent const&,
        ::ActorOwnerComponent&,
        ::VehicleRenderingRidingOffsetComponent&,
        ::CurrentTickComponent const&,
        ::EntityModifier<PassengerRenderingRidingOffsetComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::PassengerRenderingRidingOffsetComponent const*, float);

    MCNAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const&, float);

    MCNAPI static void onActorStartRiding(::Actor&, ::Actor&);
    // NOLINTEND
};
