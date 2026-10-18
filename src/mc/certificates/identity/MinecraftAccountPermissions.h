#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftAccountPermissions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mPermissions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk17e31c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MinecraftAccountPermissions& operator=(MinecraftAccountPermissions const&);
    MinecraftAccountPermissions(MinecraftAccountPermissions const&);
    MinecraftAccountPermissions();
#endif // @header-generator platform
};
