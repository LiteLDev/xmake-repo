#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct MinecraftInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetInputEnabled;
    ::ll::UntypedStorage<8, 48> mGetCurrentInputMode;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputHandlerProxyCallbacks& operator=(MinecraftInputHandlerProxyCallbacks const&);
    MinecraftInputHandlerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftInputHandlerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct MinecraftInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>    mSetInputEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<::InputMode()>> mGetCurrentInputMode;
    // NOLINTEND
};
#else // @header-generator platform
struct MinecraftInputHandlerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
