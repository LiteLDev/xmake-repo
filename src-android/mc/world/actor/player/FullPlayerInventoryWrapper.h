#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class InventoryTransactionManager;
class ItemDescriptor;
class ItemStack;
class Player;
class PlayerInventory;
class SimpleContainer;
// clang-format on

class FullPlayerInventoryWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PlayerInventory&>             mPlayerInventory;
    ::ll::TypedStorage<8, 8, ::SimpleContainer&>             mArmorInventory;
    ::ll::TypedStorage<8, 8, ::SimpleContainer&>             mHandInventory;
    ::ll::TypedStorage<8, 8, ::InventoryTransactionManager*> mTransactionManager;
    ::ll::TypedStorage<8, 8, ::Player*>                      mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FullPlayerInventoryWrapper(::Player&);

    MCNAPI int _clearSimpleContainerItem(::SimpleContainer&, ::ContainerID, int);

    MCNAPI int _removeCursorItem();

    MCNAPI int _removeCursorItem(::ItemStack const&, bool, int);

    MCNAPI int _removeSimpleContainerItem(::SimpleContainer&, ::ContainerID, int, ::ItemStack const&, bool, int);

    MCNAPI void _sendCursorSlotPacket() const;

    MCNAPI int clearAllItems();

    MCNAPI int getItemCount(std::function<bool(const ItemStack&)> const);

    MCNAPI int removeResource(::ItemStack const&, std::function<bool(const ItemStack&)> const, bool, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&);
    // NOLINTEND
};
