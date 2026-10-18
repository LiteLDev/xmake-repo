#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MouseButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          buttonNum;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseButtonBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MouseButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            buttonNum;
    // NOLINTEND
};
#else // @header-generator platform
struct MouseButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
