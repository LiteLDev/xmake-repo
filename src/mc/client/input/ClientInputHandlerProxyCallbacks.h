#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ClientInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetCurrentInputMapping;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandlerProxyCallbacks& operator=(ClientInputHandlerProxyCallbacks const&);
    ClientInputHandlerProxyCallbacks();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ClientInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetCurrentInputMapping;
    // NOLINTEND
};
#else // @header-generator platform
struct ClientInputHandlerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
