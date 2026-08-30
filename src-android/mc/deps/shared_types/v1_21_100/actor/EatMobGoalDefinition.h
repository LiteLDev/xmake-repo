#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct EatMobGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mRunSpeed;
    ::ll::TypedStorage<4, 4, float>        mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>        mPullInForce;
    ::ll::TypedStorage<4, 4, float>        mReachMobDistance;
    ::ll::TypedStorage<8, 24, std::string> mEatMobSound;
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_100::EatMobGoalDefinition const&) const;

    MCNAPI ~EatMobGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_EAT_ANIMATION_TIME();

    MCNAPI static float const& DEFAULT_PULL_IN_FORCE();

    MCNAPI static float const& DEFAULT_REACH_MOB_DISTANCE();

    MCNAPI static float const& DEFAULT_RUN_SPEED();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
