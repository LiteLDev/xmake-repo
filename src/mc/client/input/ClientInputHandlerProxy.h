#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/ClientInputHandlerProxyCallbacks.h"

class ClientInputHandlerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandlerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/ClientInputHandlerProxyCallbacks.h"

class ClientInputHandlerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ClientInputHandlerProxyCallbacks const> mCallbacks;
    // NOLINTEND
};
#else // @header-generator platform
class ClientInputHandlerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
