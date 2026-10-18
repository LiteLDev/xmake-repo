#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct PointerLocationEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode> inputMode;
    ::ll::TypedStorage<2, 2, short>       x;
    ::ll::TypedStorage<2, 2, short>       y;
    ::ll::TypedStorage<1, 1, bool>        forceMotionlessPointer;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct PointerLocationEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode> inputMode;
    ::ll::TypedStorage<2, 2, short>       x;
    ::ll::TypedStorage<2, 2, short>       y;
    ::ll::TypedStorage<1, 1, bool>        forceMotionlessPointer;
    // NOLINTEND
};
#else // @header-generator platform
struct PointerLocationEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
