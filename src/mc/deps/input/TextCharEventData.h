#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct TextCharEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, std::array<char, 5>> utf8text;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextCharEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::std::array<char, 5>> utf8text;
    // NOLINTEND
};
#else // @header-generator platform
struct TextCharEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
