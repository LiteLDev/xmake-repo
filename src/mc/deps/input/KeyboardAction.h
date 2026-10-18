#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class KeyboardAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   state;
    ::ll::TypedStorage<1, 1, uchar> key;
    ::ll::TypedStorage<4, 4, int>   controllerId;
    ::ll::TypedStorage<4, 4, int>   lshiftState;
    ::ll::TypedStorage<4, 4, int>   controlState;
    ::ll::TypedStorage<4, 4, int>   menuState;
    ::ll::TypedStorage<1, 1, bool>  isRepeatedEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardAction();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class KeyboardAction {
public:
    // KeyboardAction inner types define
    enum : int {
        Keyup   = 0,
        Keydown = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   state;
    ::ll::TypedStorage<1, 1, uchar> key;
    ::ll::TypedStorage<4, 4, int>   controllerId;
    ::ll::TypedStorage<4, 4, int>   lshiftState;
    ::ll::TypedStorage<4, 4, int>   controlState;
    ::ll::TypedStorage<4, 4, int>   menuState;
    ::ll::TypedStorage<1, 1, bool>  isRepeatedEvent;
    // NOLINTEND
};
#else // @header-generator platform
class KeyboardAction {};
#endif // @header-generator platform
#endif // @header-generator platform
