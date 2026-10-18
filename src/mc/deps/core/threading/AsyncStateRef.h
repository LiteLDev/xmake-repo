#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class AsyncStateRef {};
#else // @header-generator platform
class AsyncStateRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7d86af;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&);
    AsyncStateRef(AsyncStateRef const&);
    AsyncStateRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AsyncStateRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
