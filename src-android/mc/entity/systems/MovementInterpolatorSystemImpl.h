#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec2;
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct MinecartFlagComponent;
struct MovementInterpolatorComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
// clang-format on

struct MovementInterpolatorSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _onGroundPostTick(::StrictEntityContext const&, ::MovementInterpolatorComponent const&, ::StateVectorComponent&);

    MCNAPI static std::tuple<Vec2, Vec2> _tickRotation(::MovementInterpolatorComponent&, ::Vec2 const&, ::Vec2 const&);
    // NOLINTEND
};
