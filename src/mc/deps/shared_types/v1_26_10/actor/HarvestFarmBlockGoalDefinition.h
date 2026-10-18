#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

struct HarvestFarmBlockGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaximumSecondsUntilSearch;
    ::ll::TypedStorage<4, 4, float> mSearchCooldownMaximumSeconds;
    ::ll::TypedStorage<4, 4, float> mTaskCooldownSeconds;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_10
