#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct JumpAroundTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                      mCooldownSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownWhenHurtSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mLastHurtDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mPrepareJumpDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                      mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                        mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceToTargetRange;
    ::ll::TypedStorage<4, 4, int>                                        mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mLandingPositionRange;
    ::ll::TypedStorage<4, 4, int>                                        mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                        mSnapToSurfaceBlockRange;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<float>>                        mAllowedJumpAngles;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                      mAllowedJumpAngles;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JumpAroundTargetGoalDefinition& operator=(JumpAroundTargetGoalDefinition const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI JumpAroundTargetGoalDefinition();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~JumpAroundTargetGoalDefinition();
#else // @header-generator platform
    MCAPI JumpAroundTargetGoalDefinition(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_COOLDOWN_SECONDS();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_COOLDOWN_SECONDS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_COOLDOWN_WHEN_HURT_SECONDS();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_COOLDOWN_WHEN_HURT_SECONDS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<float> const& DEFAULT_JUMP_ANGLES();
#else // @header-generator platform
    MCAPI static ::std::vector<float> const& DEFAULT_JUMP_ANGLES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_LANDING_POSITION_SPREAD_DEGREES();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_LANDING_POSITION_SPREAD_DEGREES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_LINE_OF_SIGHT_CHECK_HEIGHT();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_LINE_OF_SIGHT_CHECK_HEIGHT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_REQUIRED_VERTICAL_SPACE();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_REQUIRED_VERTICAL_SPACE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SNAP_TO_SURFACE_BLOCK_RANGE();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SNAP_TO_SURFACE_BLOCK_RANGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
