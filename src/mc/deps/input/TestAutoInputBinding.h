#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct TestAutoInputBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          actionValue;
    // NOLINTEND

public:
    // prevent constructor by default
    TestAutoInputBinding& operator=(TestAutoInputBinding const&);
    TestAutoInputBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TestAutoInputBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            actionValue;
    // NOLINTEND
};
#else // @header-generator platform
struct TestAutoInputBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
