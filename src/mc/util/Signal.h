#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Signal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsSet;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnka779e6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Signal& operator=(Signal const&);
    Signal(Signal const&);
    Signal();
#endif // @header-generator platform
};
