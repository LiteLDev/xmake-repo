#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChestType : int {
    Chest        = 0,
    TrappedChest = 1,
    CopperChest  = 2,
    Barrel       = 3,
    EnderChest   = 4,
    ShulkerBox   = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ChestType : int {
    Chest        = 0,
    TrappedChest = 1,
    CopperChest  = 2,
    Barrel       = 3,
    EnderChest   = 4,
    ShulkerBox   = 5,
};
#else // @header-generator platform
enum class ChestType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
