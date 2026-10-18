#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class EquipmentSlot : int {
#if defined(LL_PLAT_A) // @header-generator platform
    _none          = -1,
    _begin         = 0,
    _handSlot      = 0,
    Mainhand       = 0,
    Offhand        = 1,
    _armorSlot     = 2,
    Head           = 2,
    Torso          = 3,
    Legs           = 4,
    Feet           = 5,
    Body           = 6,
    _containerSlot = 7,
    Hotbar         = 7,
    Inventory      = 8,
    EnderChest     = 9,
    Saddle         = 10,
    EntityArmor    = 11,
    Chest          = 12,
    Equippable     = 13,
    _count         = 14,
#else // @header-generator platform
    None          = -1,
    Begin         = 0,
    HandSlot      = 0,
    Mainhand      = 0,
    Offhand       = 1,
    ArmorSlot     = 2,
    Head          = 2,
    Torso         = 3,
    Legs          = 4,
    Feet          = 5,
    Body          = 6,
    ContainerSlot = 7,
    Hotbar        = 7,
    Inventory     = 8,
    EnderChest    = 9,
    Saddle        = 10,
    EntityArmor   = 11,
    Chest         = 12,
    Equippable    = 13,
    Count         = 14,
#endif // @header-generator platform
};

}
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::SharedTypes::Legacy::EquipmentSlot>();
// clang-format on
#endif // @header-generator platform
