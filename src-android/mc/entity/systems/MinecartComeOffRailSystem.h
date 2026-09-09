#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartComeOffRailSystem {
public:
    // MinecartComeOffRailSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Exclude<SnapOnRailComponent>,
        Include<InterpolateMovementNeededComponent>,
        const RailMovementComponent,
        StateVectorComponent,
        Optional<const OnGroundFlagComponent>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _minecartComeOffRailSystem(
        ::StrictEntityContext&,
        ::RailMovementComponent const&,
        ::StateVectorComponent&,
        ::Optional<const OnGroundFlagComponent>,
        ::EntityModifier<MoveRequestComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
