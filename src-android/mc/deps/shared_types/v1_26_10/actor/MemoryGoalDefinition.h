#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_10::Brain {

struct MemoryGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mConditionalFilters;
    ::ll::TypedStorage<4, 4, float>                                      mChanceToStart;
    ::ll::TypedStorage<4, 4, float>                                      mRetryAttemptCooldownSeconds;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::Brain
