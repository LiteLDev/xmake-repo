#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"

struct EmulatedScreenSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>              w;
    ::ll::TypedStorage<4, 4, int const>              h;
    ::ll::TypedStorage<4, 4, ::UIScalingRules const> scalingRules;
    ::ll::TypedStorage<8, 24, std::string const>     desc;
    ::ll::TypedStorage<4, 4, int const>              dpi;
    // NOLINTEND

public:
    // prevent constructor by default
    EmulatedScreenSize();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"

struct EmulatedScreenSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>              w;
    ::ll::TypedStorage<4, 4, int const>              h;
    ::ll::TypedStorage<4, 4, ::UIScalingRules const> scalingRules;
    ::ll::TypedStorage<8, 32, ::std::string const>   desc;
    ::ll::TypedStorage<4, 4, int const>              dpi;
    // NOLINTEND
};
#else // @header-generator platform
struct EmulatedScreenSize {};
#endif // @header-generator platform
#endif // @header-generator platform
