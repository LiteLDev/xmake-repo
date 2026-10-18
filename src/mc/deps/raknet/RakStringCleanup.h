#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class RakStringCleanup {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RakStringCleanup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RakStringCleanup {};
#endif // @header-generator platform
