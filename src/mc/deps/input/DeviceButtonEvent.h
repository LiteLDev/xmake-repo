#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DeviceButtonState.h"

struct DeviceButtonEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 id;
    ::ll::TypedStorage<4, 4, ::DeviceButtonState> state;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DeviceButtonState.h"

struct DeviceButtonEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 id;
    ::ll::TypedStorage<4, 4, ::DeviceButtonState> state;
    // NOLINTEND
};
#else // @header-generator platform
struct DeviceButtonEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
