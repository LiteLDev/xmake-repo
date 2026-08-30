#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct NapGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMin;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMax;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectDist;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectHeight;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mCanNapFilters;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mWakeMobExceptions;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
