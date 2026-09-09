#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaPath : uchar {
    NONE             = 0,
    BIOME            = 1,
    BLOCK            = 2,
    BLOCK_COMPONENTS = 3,
    CAMERA           = 4,
    COMMON           = 5,
    CRAFTING_CATALOG = 6,
    DATA_DRIVEN_UI   = 7,
    DIMENSION        = 8,
    ENTITY           = 9,
    ITEM             = 10,
    ITEM_COMMON      = 11,
    ITEM_COMPONENTS  = 12,
    PACKAGING        = 13,
    PARTICLES        = 14,
    RENDERING        = 15,
    SERVER_CONFIG    = 16,
    SOUND            = 17,
    SPAWN            = 18,
    STRUCTURE        = 19,
    VOXEL_SHAPES     = 20,
    WORLD            = 21,
    WORLD_COMMON     = 22,
    WORLD_COMPONENTS = 23,
};
