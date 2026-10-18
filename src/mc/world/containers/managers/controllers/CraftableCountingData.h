#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftableCountingData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mTotalResultItems;
    ::ll::TypedStorage<4, 4, int> mAmountOfTimesRecipeIsCrafted;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk47c4e4;
    ::ll::UntypedStorage<4, 4> mUnkfa031f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CraftableCountingData& operator=(CraftableCountingData const&);
    CraftableCountingData(CraftableCountingData const&);
    CraftableCountingData();
#endif // @header-generator platform
};
