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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mFromItemDescriptor;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mToItemDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mFromItemDescriptor;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mToItemDescriptor;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mFromItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                 mToItem;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    InventoryAction(InventoryAction const&);

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventoryAction();
#else // @header-generator platform
    MCAPI InventoryAction();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventoryAction(::InventoryAction const&);
#else // @header-generator platform
    MCAPI InventoryAction(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventoryAction(::InventorySource, uint, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::InventoryAction& operator=(::InventoryAction const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkItemStackDescriptor& getFromItemDescriptor();
#else // @header-generator platform
    MCAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI ~InventoryAction();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::InventoryAction const&);
#else // @header-generator platform
    MCAPI void* $ctor(::InventorySource source, uint slot, ::ItemStack const& fromItem, ::ItemStack const& toItem);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::InventorySource, uint, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
