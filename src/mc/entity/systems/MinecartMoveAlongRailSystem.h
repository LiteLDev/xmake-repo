#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct FallDistanceComponent;
struct LocalMoveVelocityComponent;
struct MoveRequestComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct StrictActorIDEntityContextPair;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MinecartMoveAlongRailSystem {
public:
    // MinecartMoveAlongRailSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using PlayerView = ::ViewT<
        StrictEntityContext,
        Include<PlayerComponent>,
        const ActorRotationComponent,
        const LocalMoveVelocityComponent>;

#else // @header-generator platform
#endif // @header-generator platform
    using MoveView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        const RailMovementComponent,
        SnapOnRailComponent,
        StateVectorComponent,
        Optional<const VehicleComponent>>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::RailMovementComponent const,
        ::SnapOnRailComponent,
        ::StateVectorComponent,
        ::Optional<::VehicleComponent const>>;

    using PlayerView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::PlayerComponent>,
        ::ActorRotationComponent const,
        ::LocalMoveVelocityComponent const>;

    using PostMoveView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::RailMovementComponent>,
        ::SnapOnRailComponent const,
        ::StateVectorComponent>;

    using PreMoveView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::RailMovementComponent>,
        ::OffsetsComponent const,
        ::StateVectorComponent const,
        ::FallDistanceComponent,
        ::SnapOnRailComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _calculateRailMovementSystem(
        ::StrictEntityContext const&,
        ::RailMovementComponent const&,
        ::SnapOnRailComponent&,
        ::StateVectorComponent&,
        ::Optional<const VehicleComponent>,
#else // @header-generator platform
    MCAPI static void _calculateRailMovementSystem(
        ::StrictEntityContext const&         context,
        ::RailMovementComponent const&       railMovementComponent,
        ::SnapOnRailComponent&               snapOnRailComponent,
        ::StateVectorComponent&              stateVectorComponent,
        ::Optional<::VehicleComponent const> vehicleComponent,
#endif // @header-generator platform
        ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
            StrictEntityContext,
            Include<PlayerComponent>,
            const ActorRotationComponent,
            const LocalMoveVelocityComponent>,
        ::EntityModifier<MoveRequestComponent>
#else // @header-generator platform
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::ActorRotationComponent const,
            ::LocalMoveVelocityComponent const>  playerView,
        ::EntityModifier<::MoveRequestComponent> mod
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _postRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&,
        ::SnapOnRailComponent const&,
        ::StateVectorComponent&,
        ::EntityModifier<ActorSetPositionRequestComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void _postRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&                         context,
        ::SnapOnRailComponent const&                         snapOnRailComponent,
        ::StateVectorComponent&                              stateVectorComponent,
        ::EntityModifier<::ActorSetPositionRequestComponent> mod,
        ::IConstBlockSource const&                           constBlockSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _preRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&,
        ::OffsetsComponent const&,
        ::StateVectorComponent const&,
        ::FallDistanceComponent&,
        ::SnapOnRailComponent&,
        ::EntityModifier<ActorSetPositionRequestComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void _preRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&                         context,
        ::OffsetsComponent const&                            offsetsComponent,
        ::StateVectorComponent const&                        stateVectorComponent,
        ::FallDistanceComponent&                             fallDistanceComponent,
        ::SnapOnRailComponent&                               snapOnRailComponent,
        ::EntityModifier<::ActorSetPositionRequestComponent> mod,
        ::IConstBlockSource const&                           constBlockSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createCleanupSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPostRailMovementPositionSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPostRailMovementPositionSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPreRailMovementPositionSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPreRailMovementPositionSystem();

    MCNAPI static ::TickingSystemWithInfo createRailMovementSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createRailMovementSystem();
#endif // @header-generator platform
    // NOLINTEND
};
