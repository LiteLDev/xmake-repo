#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ItemTag : public ::HashedString {
public:
    // prevent constructor by default
    ItemTag& operator=(ItemTag const&);
};
#else // @header-generator platform
struct ItemTag : public ::HashedString {};
#endif // @header-generator platform
