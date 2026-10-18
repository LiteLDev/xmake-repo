#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DuplicateKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> index;
    ::ll::TypedStorage<4, 4, int>   key;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DuplicateKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> index;
    ::ll::TypedStorage<4, 4, int>    key;
    // NOLINTEND
};
#else // @header-generator platform
struct DuplicateKey {};
#endif // @header-generator platform
#endif // @header-generator platform
