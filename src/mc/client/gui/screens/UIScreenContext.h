#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class UIScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>   xm;
    ::ll::TypedStorage<4, 4, int const>   ym;
    ::ll::TypedStorage<4, 4, float const> a;
    // NOLINTEND

public:
    // prevent constructor by default
    UIScreenContext& operator=(UIScreenContext const&);
    UIScreenContext();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UIScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>   xm;
    ::ll::TypedStorage<4, 4, int const>   ym;
    ::ll::TypedStorage<4, 4, float const> a;
    // NOLINTEND
};
#else // @header-generator platform
class UIScreenContext {};
#endif // @header-generator platform
#endif // @header-generator platform
