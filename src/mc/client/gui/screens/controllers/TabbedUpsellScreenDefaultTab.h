#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TabbedUpsellScreenDefaultTab : int {
    Minecraft    = 0,
    XBL          = 1,
    Achievements = 2,
    Multiplayer  = 3,
    Server       = 4,
    Store        = 5,
    Creative     = 6,
    Packs        = 7,
    Seeds        = 8,
    Count        = 9,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TabbedUpsellScreenDefaultTab : int {
    Minecraft    = 0,
    Xbl          = 1,
    Achievements = 2,
    Multiplayer  = 3,
    Server       = 4,
    Store        = 5,
    Creative     = 6,
    Packs        = 7,
    Seeds        = 8,
    Count        = 9,
};
#else // @header-generator platform
enum class TabbedUpsellScreenDefaultTab : int {};
#endif // @header-generator platform
#endif // @header-generator platform
