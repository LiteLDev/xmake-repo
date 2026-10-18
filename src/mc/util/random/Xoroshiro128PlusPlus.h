#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mSeedLo;
    ::ll::TypedStorage<8, 8, ulong> mSeedHi;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk84d7b8;
    ::ll::UntypedStorage<8, 8> mUnk571258;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Xoroshiro128PlusPlus& operator=(Xoroshiro128PlusPlus const&);
    Xoroshiro128PlusPlus(Xoroshiro128PlusPlus const&);
#endif // @header-generator platform
    Xoroshiro128PlusPlus();
};
