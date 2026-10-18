#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinValue;
    ::ll::TypedStorage<4, 4, int>  mMaxValue;
    ::ll::TypedStorage<1, 1, bool> mInvert;
    ::ll::TypedStorage<1, 1, bool> mInclusive;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandIntegerRange(int, int, bool, bool);

    MCNAPI bool isWithinRange(int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int, bool, bool);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
