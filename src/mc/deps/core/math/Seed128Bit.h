#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Seed128Bit {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> low;
    ::ll::TypedStorage<8, 8, ulong> high;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk26ebe7;
    ::ll::UntypedStorage<8, 8> mUnk6afd62;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Seed128Bit& operator=(Seed128Bit const&);
    Seed128Bit(Seed128Bit const&);
    Seed128Bit();
#endif // @header-generator platform
};
