#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

namespace SharedTypes::v1_26_10 {

struct DropItemForGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mSecondsBeforePickup;
    ::ll::TypedStorage<4, 4, float>                                              mTotalCooldownSeconds;
    ::ll::TypedStorage<4, 4, float>                                              mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                                              mOfferingDistance;
    ::ll::TypedStorage<4, 4, float>                                              mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                                              mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mTeleportDistanceFromTarget;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mTimeOfDayRange;
    ::ll::TypedStorage<8, 24, std::string>                                       mLootTable;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnDropAttempt;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes>             mTargetFilter;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
