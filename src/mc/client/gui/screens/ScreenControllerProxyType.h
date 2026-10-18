#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScreenControllerProxyType : int {
    BREWING_STAND = 0,
    CRAFTING      = 1,
    CONTAINER     = 2,
    FURNACE       = 3,
    PERSONA       = 4,
    PLAY          = 5,
    SETTINGS      = 6,
    SKIN          = 7,
    START_MENU    = 8,
    STORE         = 9,
    WORLDTEMPLATE = 10,
    HOW_TO_PLAY   = 11,
    SAFE_ZONE     = 12,
    CODE_BUILDER  = 13,
    LOOM          = 14,
    ANVIL         = 15,
    CHAT          = 16,
    PORTFOLIO     = 17,
    ENCHANTING    = 18,
    STONECUTTER   = 19,
    TRADING       = 20,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ScreenControllerProxyType : int {
    BrewingStand  = 0,
    Crafting      = 1,
    Container     = 2,
    Furnace       = 3,
    Persona       = 4,
    Play          = 5,
    Settings      = 6,
    Skin          = 7,
    StartMenu     = 8,
    Store         = 9,
    Worldtemplate = 10,
    HowToPlay     = 11,
    SafeZone      = 12,
    CodeBuilder   = 13,
    Loom          = 14,
    Anvil         = 15,
    Chat          = 16,
    Portfolio     = 17,
    Enchanting    = 18,
    Stonecutter   = 19,
    Trading       = 20,
};
#else // @header-generator platform
enum class ScreenControllerProxyType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
