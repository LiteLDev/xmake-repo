#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct MolangOffsetPlaceholder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<8, 8, ulong>           mResourceOffset;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 8, uint64>          mResourceOffset;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MolangOffsetPlaceholder();
#else // @header-generator platform
#endif // @header-generator platform
};
