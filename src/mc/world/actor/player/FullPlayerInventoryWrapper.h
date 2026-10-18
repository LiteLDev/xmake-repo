#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class InventoryTransactionManager;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FullPlayerInventoryWrapper(::Player&);
#else // @header-generator platform
    MCAPI int _clearSimpleContainerItem(::SimpleContainer& container, ::ContainerID containerId, int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _clearSimpleContainerItem(::SimpleContainer&, ::ContainerID, int);
#else // @header-generator platform
    MCAPI int _removeCursorItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _removeCursorItem();
#else // @header-generator platform
    MCAPI int _removeCursorItem(::ItemStack const& item, bool requireExactAux, int maxCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _removeCursorItem(::ItemStack const&, bool, int);
#else // @header-generator platform
    MCAPI int _removeSimpleContainerItem(
        ::SimpleContainer& container,
        ::ContainerID      containerId,
        int                slot,
        ::ItemStack const& sourceItem,
        bool               requireExactAux,
        int                maxCount
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _removeSimpleContainerItem(::SimpleContainer&, ::ContainerID, int, ::ItemStack const&, bool, int);
#else // @header-generator platform
    MCAPI int clearAllItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendCursorSlotPacket() const;
#else // @header-generator platform
    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int clearAllItems();

    MCNAPI int getItemCount(std::function<bool(const ItemStack&)> const);

    MCNAPI int removeResource(::ItemStack const&, std::function<bool(const ItemStack&)> const, bool, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&);
#else // @header-generator platform
    MCAPI int removeResource(
        ::ItemStack const&                        sourceItem,
        ::std::function<bool(::ItemStack const&)> comparator,
        bool                                      requireExactAux,
        int                                       maxCount
    );
#endif // @header-generator platform
    // NOLINTEND
};
