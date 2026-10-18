#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BrewingStandScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mIsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandScreenControllerProxyCallbacks& operator=(BrewingStandScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrewingStandScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BrewingStandScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(int&, int&, int)>> mIsFinished;
    // NOLINTEND
};
#else // @header-generator platform
struct BrewingStandScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
