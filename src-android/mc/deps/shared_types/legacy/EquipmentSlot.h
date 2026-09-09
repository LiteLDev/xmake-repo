#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class EquipmentSlot : int {
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
};

}
