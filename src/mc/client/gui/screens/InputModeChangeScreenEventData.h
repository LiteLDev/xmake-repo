#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct InputModeChangeScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode> mode;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct InputModeChangeScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode> mode;
    // NOLINTEND
};
#else // @header-generator platform
struct InputModeChangeScreenEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
