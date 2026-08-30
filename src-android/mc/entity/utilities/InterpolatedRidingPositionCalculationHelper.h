#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
template<typename... T0> class Include;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorRotationComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
// clang-format on

struct InterpolatedRidingPositionCalculationHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 getCamelInterpolatedRidingOffset(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& BASE_OFFSET();
    // NOLINTEND
};
