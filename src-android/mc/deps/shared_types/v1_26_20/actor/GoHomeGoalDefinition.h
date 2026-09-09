#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct GoHomeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                        mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                                          mInterval;
    ::ll::TypedStorage<4, 4, float>                                                        mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                        mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnFailedTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoalDefinition& operator=(GoHomeGoalDefinition const&);
    GoHomeGoalDefinition(GoHomeGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_26_20::GoHomeGoalDefinition& operator=(::SharedTypes::v1_26_20::GoHomeGoalDefinition&&);

    MCNAPI ~GoHomeGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_CALCULATE_NEW_PATH_RADIUS();

    MCNAPI static float const& DEFAULT_GOAL_RADIUS();

    MCNAPI static int const& DEFAULT_INTERVAL();

    MCNAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
