#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

struct OnEquipmentChangedSlotEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
    ::ll::TypedStorage<8, 24, std::string>                         mOnEquip;
    ::ll::TypedStorage<8, 24, std::string>                         mOnUnequip;
    // NOLINTEND

public:
    // prevent constructor by default
    OnEquipmentChangedSlotEntry& operator=(OnEquipmentChangedSlotEntry const&);
    OnEquipmentChangedSlotEntry();
};
