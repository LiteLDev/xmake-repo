#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogArea : uint {
    Actor               = 0,
    Addon               = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    AI                  = 2,
#else // @header-generator platform
    Ai                  = 2,
#endif // @header-generator platform
    Animation           = 3,
    AutomatedTests      = 4,
    BiomeRegistry       = 5,
    Blocks              = 6,
    Camera              = 7,
    Cereal              = 8,
    Commands            = 9,
    Components          = 10,
    Dialogue            = 11,
    Effects             = 12,
    Entity              = 13,
    FeatureRegistry     = 14,
    Geometry            = 15,
    Item                = 16,
    Json                = 17,
    LevelStorage        = 18,
    Lighting            = 19,
    Localization        = 20,
    Log                 = 21,
    Molang              = 22,
    Messaging           = 23,
    Persona             = 24,
    Recipes             = 25,
    Rendering           = 26,
    RuntimeCamera       = 27,
    Scripting           = 28,
    Sound               = 29,
    Store               = 30,
    Structure           = 31,
    Texture             = 32,
#if defined(LL_PLAT_A) // @header-generator platform
    UI                  = 33,
#else // @header-generator platform
    Ui                  = 33,
#endif // @header-generator platform
    Volumes             = 34,
    LootTable           = 35,
    Packs               = 36,
    DisconnectionScreen = 37,
    VoxelShape          = 38,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT               = 39,
#else // @header-generator platform
    Count               = 39,
#endif // @header-generator platform
};
