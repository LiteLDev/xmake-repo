#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CrashDumpLogContextKey : int {
    WorldSeed              = 0,
    IsEditorWorld          = 1,
    DynamicTexturesEnabled = 2,
    GraphicsMode           = 3,
    CrashPlatform          = 4,
    GameVersion            = 5,
    TotalMemory            = 6,
    DeviceSessionID        = 7,
    DeviceID               = 8,
    ResourcePacks          = 9,
    BehaviorPacks          = 10,
    MainSceneStack         = 11,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
