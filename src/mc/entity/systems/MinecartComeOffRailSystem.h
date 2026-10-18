#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Exclude<SnapOnRailComponent>,
        Include<InterpolateMovementNeededComponent>,
        const RailMovementComponent,
        StateVectorComponent,
        Optional<const OnGroundFlagComponent>>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Exclude<::SnapOnRailComponent>,
        ::Include<::InterpolateMovementNeededComponent>,
        ::RailMovementComponent const,
        ::StateVectorComponent,
        ::Optional<::OnGroundFlagComponent const>>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _minecartComeOffRailSystem(
        ::StrictEntityContext&,
        ::RailMovementComponent const&,
        ::StateVectorComponent&,
        ::Optional<const OnGroundFlagComponent>,
        ::EntityModifier<MoveRequestComponent>
#else // @header-generator platform
    MCAPI static void _minecartComeOffRailSystem(
        ::StrictEntityContext&                    context,
        ::RailMovementComponent const&            railMovementComponent,
        ::StateVectorComponent&                   stateVectorComponent,
        ::Optional<::OnGroundFlagComponent const> onGroundFlagComponent,
        ::EntityModifier<::MoveRequestComponent>  mod
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
