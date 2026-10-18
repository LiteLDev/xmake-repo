#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenViewProxyCallbacks.h"

class ScreenViewProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenViewProxyCallbacks.h"

class ScreenViewProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ScreenViewProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class ScreenViewProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
