#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
template<typename... T0> class Include;
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
struct StrictActorIDEntityContextPair;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MinecartMoveAlongRailSystem {
public:
    // MinecartMoveAlongRailSystem inner types define
    using PlayerView = ::ViewT<
        StrictEntityContext,
        Include<PlayerComponent>,
        const ActorRotationComponent,
        const LocalMoveVelocityComponent>;

    using MoveView = ::ViewT<
        StrictEntityContext,
        const RailMovementComponent,
        SnapOnRailComponent,
        StateVectorComponent,
        Optional<const VehicleComponent>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _calculateRailMovementSystem(
        ::StrictEntityContext const&,
        ::RailMovementComponent const&,
        ::SnapOnRailComponent&,
        ::StateVectorComponent&,
        ::Optional<const VehicleComponent>,
        ::ViewT<
            StrictEntityContext,
            Include<PlayerComponent>,
            const ActorRotationComponent,
            const LocalMoveVelocityComponent>,
        ::EntityModifier<MoveRequestComponent>
    );

    MCNAPI static void _postRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&,
        ::SnapOnRailComponent const&,
        ::StateVectorComponent&,
        ::EntityModifier<ActorSetPositionRequestComponent>,
        ::IConstBlockSource const&
    );

    MCNAPI static void _preRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&,
        ::OffsetsComponent const&,
        ::StateVectorComponent const&,
        ::FallDistanceComponent&,
        ::SnapOnRailComponent&,
        ::EntityModifier<ActorSetPositionRequestComponent>,
        ::IConstBlockSource const&
    );

    MCNAPI static ::TickingSystemWithInfo createCleanupSystem();

    MCNAPI static ::TickingSystemWithInfo createPostRailMovementPositionSystem();

    MCNAPI static ::TickingSystemWithInfo createPreRailMovementPositionSystem();

    MCNAPI static ::TickingSystemWithInfo createRailMovementSystem();
    // NOLINTEND
};
