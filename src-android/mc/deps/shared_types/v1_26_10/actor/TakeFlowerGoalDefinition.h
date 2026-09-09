#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_10 {

struct TakeFlowerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>         mFilters;
    ::ll::TypedStorage<4, 4, float>                                              mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                              mMinPickupFlowerWaitSeconds;
    ::ll::TypedStorage<4, 4, float>                                              mMaxPickupFlowerWaitSeconds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mSearchArea;
    ::ll::TypedStorage<4, 4, float>                                              mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                              mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                              mMinDistanceToTarget;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnTakeFlower;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
