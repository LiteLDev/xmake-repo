#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

namespace SharedTypes::v1_26_10 {

struct PlayGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mMaxPlayDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                  mChanceToStart;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                                    mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                                    mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                    mFollowDistanceInBlocks;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
