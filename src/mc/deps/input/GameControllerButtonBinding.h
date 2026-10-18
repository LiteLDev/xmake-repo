#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GameControllerButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          buttonNum;
    ::ll::TypedStorage<4, 4, float>        repeatInterval;
    ::ll::TypedStorage<1, 1, bool>         exclusive;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerButtonBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameControllerButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            buttonNum;
    ::ll::TypedStorage<4, 4, float>          repeatInterval;
    ::ll::TypedStorage<1, 1, bool>           exclusive;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
