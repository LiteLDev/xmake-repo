#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/WorkGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

struct WorkComposterGoalDefinition : public ::SharedTypes::v1_26_10::WorkGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>  mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool> mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool> mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>  mMinItemCount;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
