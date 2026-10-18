#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

struct KeyboardKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  buttonName;
    ::ll::TypedStorage<4, 4, int>           keyNum;
    ::ll::TypedStorage<1, 1, ::FocusImpact> focusImpact;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardKeyBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

struct KeyboardKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            keyNum;
    ::ll::TypedStorage<1, 1, ::FocusImpact>  focusImpact;
    // NOLINTEND
};
#else // @header-generator platform
struct KeyboardKeyBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
