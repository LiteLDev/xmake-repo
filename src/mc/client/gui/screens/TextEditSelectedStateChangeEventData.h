#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct TextEditSelectedStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    ::ll::TypedStorage<4, 4, int>  index;
    ::ll::TypedStorage<1, 1, bool> selected;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextEditSelectedStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    ::ll::TypedStorage<4, 4, int>  index;
    ::ll::TypedStorage<1, 1, bool> selected;
    // NOLINTEND
};
#else // @header-generator platform
struct TextEditSelectedStateChangeEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
