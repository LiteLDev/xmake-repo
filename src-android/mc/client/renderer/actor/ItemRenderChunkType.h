#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
