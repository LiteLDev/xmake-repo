#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FriendlySize {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> bytes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb37908;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FriendlySize& operator=(FriendlySize const&);
    FriendlySize(FriendlySize const&);
#endif // @header-generator platform
    FriendlySize();
};
