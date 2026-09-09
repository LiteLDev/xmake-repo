#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"

namespace SharedTypes::v1_26_40 {

struct BegGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mLookDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                           mLookTime;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mItems;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
