#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& refCount();
#else // @header-generator platform
    MCAPI static int& refCount();
#endif // @header-generator platform
    // NOLINTEND
};
