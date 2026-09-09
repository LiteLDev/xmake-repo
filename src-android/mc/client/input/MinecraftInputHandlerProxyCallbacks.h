#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
