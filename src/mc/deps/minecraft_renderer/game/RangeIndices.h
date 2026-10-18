#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct RangeIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mStart;
    ::ll::TypedStorage<4, 4, int> mCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit operator bool() const;

    MCNAPI int set(int, int);
    // NOLINTEND
};
#else // @header-generator platform
struct RangeIndices {};
#endif // @header-generator platform
