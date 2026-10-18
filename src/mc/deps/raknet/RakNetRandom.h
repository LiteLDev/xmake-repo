#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 2500, uint[625]> state;
    ::ll::TypedStorage<8, 8, uint*>        next;
    ::ll::TypedStorage<4, 4, int>          left;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 2500> mUnk9cb157;
    ::ll::UntypedStorage<8, 8>    mUnkb6bf35;
    ::ll::UntypedStorage<4, 4>    mUnk3b9378;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const&);
    RakNetRandom(RakNetRandom const&);
    RakNetRandom();
#endif // @header-generator platform
};

} // namespace RakNet
