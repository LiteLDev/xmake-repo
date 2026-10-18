#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct EquipItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItemStack;
    ::ll::TypedStorage<1, 1, bool>          mHasItemToEquip;
    ::ll::TypedStorage<4, 4, int>           mCountToPickup;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EquipItemComponent& operator=(EquipItemComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onEquipItemPickedUp(::ItemStack, int);

    MCNAPI ~EquipItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void onEquipItemPickedUp(::ItemStack item, int countToPickup);
#endif // @header-generator platform
    // NOLINTEND
};
