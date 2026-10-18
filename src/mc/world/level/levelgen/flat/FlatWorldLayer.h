#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct FlatWorldLayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> material;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> material;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>             height;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FlatWorldLayer& operator=(FlatWorldLayer const&);
    FlatWorldLayer();
#else // @header-generator platform
#endif // @header-generator platform
};
