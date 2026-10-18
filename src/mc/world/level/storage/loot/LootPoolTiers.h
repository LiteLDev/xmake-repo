#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LootPoolTiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mRangeForInitialTier;
    ::ll::TypedStorage<4, 4, int>   mBonusRolls;
    ::ll::TypedStorage<4, 4, float> mBonusRollChance;
    // NOLINTEND
};
