#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> snowLevel;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BiomeChunkState();
#else // @header-generator platform
#endif // @header-generator platform
};
