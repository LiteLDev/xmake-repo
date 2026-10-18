#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_130 {

struct ExploreOutskirtsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     mNextXZDistance;
    ::ll::TypedStorage<4, 4, int>     mNextYDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumWaitTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mMaximumWaitTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mMaximumTravelTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mExploreDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumPerimeter;
    ::ll::TypedStorage<4, 4, float>   mMinimumDistanceFromTarget;
    ::ll::TypedStorage<4, 4, float>   mWaitTimerRatio;
    ::ll::TypedStorage<4, 12, ::Vec3> mDistanceFromBoundary;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& DEFAULT_DISTANCE_FROM_BOUNDARY();
#else // @header-generator platform
    MCAPI static ::Vec3 const& DEFAULT_DISTANCE_FROM_BOUNDARY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130
