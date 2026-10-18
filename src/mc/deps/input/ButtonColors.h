#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct ButtonColors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> pressed;
    ::ll::TypedStorage<4, 16, ::mce::Color> released;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonColors();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct ButtonColors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> pressed;
    ::ll::TypedStorage<4, 16, ::mce::Color> released;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonColors {};
#endif // @header-generator platform
#endif // @header-generator platform
