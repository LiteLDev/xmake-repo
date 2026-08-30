#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/MobDescriptor.h"

namespace SharedTypes::v1_26_10 {

struct SwimWithEntityGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                               mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                                               mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                                               mIntervalRefreshTime;
    ::ll::TypedStorage<4, 4, float>                                               mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                                               mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                                               mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                                               mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                               mSearchRange;
    ::ll::TypedStorage<4, 4, float>                                               mStopDistance;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::MobDescriptor>> mTargetTypes;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
