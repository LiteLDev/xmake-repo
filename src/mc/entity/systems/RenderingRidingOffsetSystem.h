#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class StrictEntityContext;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct CurrentTickComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct InterpolateMovementNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PassengerRenderingRidingOffsetComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct RidingOffsetInterpolationPair;
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
struct VehicleComponent;
struct VehicleRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void _tickEntity(
        ::StrictEntityContext const&,
        ::VehicleComponent const&                                   vehicleComponent,
        ::ActorOwnerComponent&                                      actorOwnerComponent,
        ::VehicleRenderingRidingOffsetComponent&                    vehicleOffsetComponent,
        ::CurrentTickComponent const&                               currentTickComponent,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const& actor, float frameAlpha);

    MCAPI static void onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
