#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureLoadState : uchar {
    // bitfield representation
    UnloadedBit     = 0,
    PendingBit      = 1 << 0,
    LoadedBit       = 1 << 1,
    PendingMetadata = 1 << 2,
    LoadedMetadata  = 1 << 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextureLoadState : uchar {
    // bitfield representation
    UnloadedBit     = 0,
    PendingBit      = 1 << 0,
    LoadedBit       = 1 << 1,
    PendingMetadata = 1 << 2,
    LoadedMetadata  = 1 << 3,
};
#else // @header-generator platform
enum class TextureLoadState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
