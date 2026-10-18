#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PredictedMovementValues {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mUseAggressiveTickInterval;
    ::ll::TypedStorage<8, 8, long> mInterpolationWindowSizeInTicks;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnka87f83;
    ::ll::UntypedStorage<8, 8> mUnk2ed6f8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PredictedMovementValues& operator=(PredictedMovementValues const&);
    PredictedMovementValues(PredictedMovementValues const&);
    PredictedMovementValues();
#endif // @header-generator platform
};
