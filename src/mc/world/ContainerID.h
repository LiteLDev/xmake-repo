#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum ContainerID : schar {
    CONTAINER_ID_NONE            = -1,
    CONTAINER_ID_INVENTORY       = 0,
    CONTAINER_ID_FIRST           = 1,
    CONTAINER_ID_LAST            = 100,
    CONTAINER_ID_OFFHAND         = 119,
    CONTAINER_ID_ARMOR           = 120,
    CONTAINER_ID_SELECTION_SLOTS = 122,
    CONTAINER_ID_PLAYER_ONLY_UI  = 124,
    CONTAINER_ID_REGISTRY        = 125,
#else // @header-generator platform
enum class ContainerID : schar {
    None           = -1,
    Inventory      = 0,
    First          = 1,
    Last           = 100,
    Offhand        = 119,
    Armor          = 120,
    SelectionSlots = 122,
    PlayerOnlyUi   = 124,
    Registry       = 125,
#endif // @header-generator platform
};
