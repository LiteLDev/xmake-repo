#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemRenderChunkType : int {
    Block        = 0,
    BlockItem    = 1,
    Item         = 2,
    Glint        = 3,
    GlintUI      = 4,
    UnglintUI    = 5,
    Banner       = 6,
    Shield       = 7,
    Skull        = 8,
    DragonHead   = 9,
    Conduit      = 10,
    DecoratedPot = 11,
    Any          = 12,
};
#else // @header-generator platform
enum class ItemRenderChunkType : int {};
#endif // @header-generator platform
