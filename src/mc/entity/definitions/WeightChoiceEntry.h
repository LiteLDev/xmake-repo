#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightChoiceEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mValue;
    ::ll::TypedStorage<4, 4, int>   mWeight;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkf2ccd2;
    ::ll::UntypedStorage<4, 4> mUnk314dc3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WeightChoiceEntry& operator=(WeightChoiceEntry const&);
    WeightChoiceEntry(WeightChoiceEntry const&);
    WeightChoiceEntry();
#endif // @header-generator platform
};
