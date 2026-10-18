#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/Result.h"
#include "mc/platform/ErrorInfo.h"

struct traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> x;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~traits();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
