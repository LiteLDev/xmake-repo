#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

namespace SharedTypes::v1_26_40 {

struct SnackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mItems;
    ::ll::TypedStorage<4, 4, float>                                             mCooldown;
    ::ll::TypedStorage<4, 4, float>                                             mCooldownMin;
    ::ll::TypedStorage<4, 4, float>                                             mStopChance;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
