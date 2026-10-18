#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct HowToPlayScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mChangeTab;
    // NOLINTEND

public:
    // prevent constructor by default
    HowToPlayScreenControllerProxyCallbacks& operator=(HowToPlayScreenControllerProxyCallbacks const&);
    HowToPlayScreenControllerProxyCallbacks();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct HowToPlayScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>> mChangeTab;
    // NOLINTEND
};
#else // @header-generator platform
struct HowToPlayScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
