#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/Container.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ListTag;
class Player;
class SaveContext;
// clang-format on

class FillingContainer : public ::Container {
public:
    // FillingContainer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ItemList = std::vector<ItemStack>;
#else // @header-generator platform
    using ItemList = ::std::vector<::ItemStack>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    ::ll::TypedStorage<8, 8, ::Player*>               mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<8, 8, ::Player*>                   mPlayer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FillingContainer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FillingContainer();
#else // @header-generator platform
    virtual ~FillingContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual void swapSlots(int from, int to);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual bool add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual bool canAdd(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeItem(int, int);
#else // @header-generator platform
    virtual void removeItem(int slot, int count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual void clearSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual int clearInventory(int resizeTo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int removeResource(::ItemStack const&, bool, bool, int);
#else // @header-generator platform
    virtual void loadFromTag(::ListTag const& inventoryList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void swapSlots(int, int);
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool add(::ItemStack&);
#else // @header-generator platform
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAdd(::ItemStack const&) const;
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearSlot(int);
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int clearInventory(int);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ListTag> saveToTag(::SaveContext const&) const;
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadFromTag(::ListTag const&);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _trySetInSlot(::ItemStack&, int const&, int const&, int&);
#else // @header-generator platform
    virtual void _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FillingContainer(::Player*, int, ::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI int _addResource(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _addResource(::ItemStack const&);
#else // @header-generator platform
    MCAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _doDrop(::ItemStack&, bool);
#else // @header-generator platform
    MCAPI void _release(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getFreeSlot() const;
#else // @header-generator platform
    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getSlotWithRemainingSpace(::ItemStack const&) const;

    MCNAPI bool _isCreative() const;

    MCNAPI void _release(int);

    MCNAPI int getHotbarSize() const;

    MCNAPI int getSlotWithItem(::ItemStack const&, bool, bool) const;

    MCNAPI bool hasResource(int);

    MCNAPI bool removeResource(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player*, int, ::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI bool removeResource(int type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCAPI int $removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCAPI void $swapSlots(int from, int to);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI bool $add(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI bool $canAdd(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeItem(int, int);
#else // @header-generator platform
    MCAPI void $removeItem(int slot, int count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI void $clearSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI int $clearInventory(int resizeTo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $removeResource(::ItemStack const&, bool, bool, int);
#else // @header-generator platform
    MCAPI void $loadFromTag(::ListTag const& inventoryList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $swapSlots(int, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $setItem(int slot, ::ItemStack const& item);
#else // LL_PLAT_C
    MCFOLD void $setItem(int slot, ::ItemStack const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(::ItemStack&);
#else // @header-generator platform
    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAdd(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearSlot(int);
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $clearInventory(int);
#else // @header-generator platform
    MCFOLD int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ListTag> $saveToTag(::SaveContext const&) const;
#else // @header-generator platform
    MCFOLD void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadFromTag(::ListTag const&);
#else // @header-generator platform
    MCFOLD void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_trySetInSlot(::ItemStack&, int const&, int const&, int&);
#else // @header-generator platform
    MCAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
