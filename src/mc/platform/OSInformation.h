#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct OSInformation {};
#else // @header-generator platform
struct OSInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4530db;
    ::ll::UntypedStorage<4, 4>  mUnkf2b206;
    ::ll::UntypedStorage<8, 32> mUnk5e8eb9;
    // NOLINTEND

public:
    // prevent constructor by default
    OSInformation& operator=(OSInformation const&);
    OSInformation(OSInformation const&);
    OSInformation();
};
#endif // @header-generator platform
#endif // @header-generator platform
