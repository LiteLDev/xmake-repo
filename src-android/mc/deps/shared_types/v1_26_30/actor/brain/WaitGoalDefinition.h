#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

namespace SharedTypes::v1_26_30::Brain::MemoryGoals {

struct WaitGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, std::variant<float, SharedTypes::FloatRange>> mDurationSeconds;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemoryGoals
