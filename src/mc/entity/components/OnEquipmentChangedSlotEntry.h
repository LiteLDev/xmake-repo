#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#else // @header-generator platform
#endif // @header-generator platform

struct OnEquipmentChangedSlotEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
    ::ll::TypedStorage<8, 24, std::string>                         mOnEquip;
    ::ll::TypedStorage<8, 24, std::string>                         mOnUnequip;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkf60ece;
    ::ll::UntypedStorage<8, 32> mUnke0355c;
    ::ll::UntypedStorage<8, 32> mUnkb0d96a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OnEquipmentChangedSlotEntry& operator=(OnEquipmentChangedSlotEntry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnEquipmentChangedSlotEntry(OnEquipmentChangedSlotEntry const&);
#endif // @header-generator platform
    OnEquipmentChangedSlotEntry();
};
