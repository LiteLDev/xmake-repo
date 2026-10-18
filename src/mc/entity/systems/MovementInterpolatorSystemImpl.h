#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec2;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct MinecartFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct MovementInterpolatorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct OnGroundFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StateVectorComponent;
// clang-format on

struct MovementInterpolatorSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _onGroundPostTick(::StrictEntityContext const&, ::MovementInterpolatorComponent const&, ::StateVectorComponent&);
#else // @header-generator platform
    MCAPI static void _onGroundPostTick(
        ::StrictEntityContext const&,
        ::MovementInterpolatorComponent const& movementInterpolatorComponent,
        ::StateVectorComponent&                stateVectorComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::tuple<Vec2, Vec2> _tickRotation(::MovementInterpolatorComponent&, ::Vec2 const&, ::Vec2 const&);
#else // @header-generator platform
    MCAPI static ::std::tuple<::Vec2, ::Vec2> _tickRotation(
        ::MovementInterpolatorComponent& movementInterpolatorComponent,
        ::Vec2 const&                    actorCurrentRotation,
        ::Vec2 const&                    actorPreviousRotation
    );
#endif // @header-generator platform
    // NOLINTEND
};
