#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct StalkAndPounceOnTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mStalkSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mMaxStalkDist;
    ::ll::TypedStorage<4, 4, float>                                      mLeapHeight;
    ::ll::TypedStorage<4, 4, float>                                      mLeapDist;
    ::ll::TypedStorage<4, 4, float>                                      mPounceMaxDist;
    ::ll::TypedStorage<4, 4, float>                                      mStrikeDist;
    ::ll::TypedStorage<4, 4, float>                                      mInterestTime;
    ::ll::TypedStorage<4, 4, float>                                      mStuckTime;
    ::ll::TypedStorage<1, 1, bool>                                       mSetPersistent;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mStuckBlocks;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
