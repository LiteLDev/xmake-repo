#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/FocusManagerProxyCallbacks.h"

class FocusManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusManagerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/FocusManagerProxyCallbacks.h"

class FocusManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::FocusManagerProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class FocusManagerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
