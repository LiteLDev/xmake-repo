#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolationPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mNew;
    ::ll::TypedStorage<4, 4, float> mOld;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkd23e2c;
    ::ll::UntypedStorage<4, 4> mUnk41f2e3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InterpolationPair& operator=(InterpolationPair const&);
    InterpolationPair(InterpolationPair const&);
    InterpolationPair();
#endif // @header-generator platform
};
