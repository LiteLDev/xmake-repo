#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchState.h"

struct TouchPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<4, 4, ::TouchState> state;
    ::ll::TypedStorage<4, 4, float>        x;
    ::ll::TypedStorage<4, 4, float>        y;
    ::ll::TypedStorage<1, 1, bool>         mCaptured;
    ::ll::TypedStorage<1, 1, bool>         mStartedInactive;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchPoint();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchState.h"

struct TouchPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<4, 4, ::TouchState> state;
    ::ll::TypedStorage<4, 4, float>        x;
    ::ll::TypedStorage<4, 4, float>        y;
    ::ll::TypedStorage<1, 1, bool>         mCaptured;
    ::ll::TypedStorage<1, 1, bool>         mStartedInactive;
    // NOLINTEND
};
#else // @header-generator platform
struct TouchPoint {};
#endif // @header-generator platform
#endif // @header-generator platform
