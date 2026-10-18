#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

struct FertilizeFarmBlockGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mMaxFertilizerUsage;
    ::ll::TypedStorage<4, 4, float> mSearchCooldownMaximumSeconds;
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
