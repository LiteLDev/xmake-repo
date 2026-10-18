#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

class ShaderColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> color;
    ::ll::TypedStorage<1, 1, bool>          dirty;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setColor(::mce::Color const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

class ShaderColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> color;
    ::ll::TypedStorage<1, 1, bool>          dirty;
    // NOLINTEND
};
#else // @header-generator platform
class ShaderColor {};
#endif // @header-generator platform
#endif // @header-generator platform
