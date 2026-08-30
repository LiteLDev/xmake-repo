#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/MeleeAttackGoalDefinition.h"

namespace SharedTypes::v1_26_40 {

struct StompAttackGoalDefinition : public ::SharedTypes::v1_26_40::MeleeAttackGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStompRangeMultiplier;
    ::ll::TypedStorage<4, 4, float> mNoDamageRangeMultiplier;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
