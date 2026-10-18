#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"

struct ButtonEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>          id;
    ::ll::TypedStorage<1, 1, ::ButtonState> state;
    ::ll::TypedStorage<1, 1, bool>          exclusive;
    ::ll::TypedStorage<4, 4, float>         repeatInterval;
    ::ll::TypedStorage<4, 4, int>           source;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"

struct ButtonEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>          id;
    ::ll::TypedStorage<1, 1, ::ButtonState> state;
    ::ll::TypedStorage<1, 1, bool>          exclusive;
    ::ll::TypedStorage<4, 4, float>         repeatInterval;
    ::ll::TypedStorage<4, 4, int>           source;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
