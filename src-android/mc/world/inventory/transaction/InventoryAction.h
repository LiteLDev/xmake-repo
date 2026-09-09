#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
// clang-format on

class InventoryAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::InventorySource>            mSource;
    ::ll::TypedStorage<4, 4, uint>                          mSlot;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mFromItemDescriptor;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mToItemDescriptor;
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mFromItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mToItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryAction();

    MCNAPI InventoryAction(::InventoryAction const&);

    MCNAPI InventoryAction(::InventorySource, uint, ::ItemStack const&, ::ItemStack const&);

    MCNAPI ::NetworkItemStackDescriptor& getFromItemDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::InventoryAction const&);

    MCNAPI void* $ctor(::InventorySource, uint, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND
};
