#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NibblePair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    uchar first  : 4;
    uchar second : 4;
#else // @header-generator platform
    uchar mUnk2857c7 : 4;
    uchar mUnkd644da : 4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NibblePair& operator=(NibblePair const&);
    NibblePair(NibblePair const&);
    NibblePair();
#endif // @header-generator platform
};
