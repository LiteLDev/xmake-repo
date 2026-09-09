#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ListTag;
class Player;
class SaveContext;
// clang-format on

class FillingContainer : public ::Container {
public:
    // FillingContainer inner types define
    using ItemList = std::vector<ItemStack>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    ::ll::TypedStorage<8, 8, ::Player*>               mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    FillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FillingContainer();

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual void removeItem(int, int);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual int removeResource(::ItemStack const&, bool, bool, int);

    virtual void swapSlots(int, int);

    virtual bool add(::ItemStack&);

    virtual bool canAdd(::ItemStack const&) const;

    virtual void clearSlot(int);

    virtual int clearInventory(int);

    virtual std::unique_ptr<ListTag> saveToTag(::SaveContext const&) const;

    virtual void loadFromTag(::ListTag const&);

    virtual void _trySetInSlot(::ItemStack&, int const&, int const&, int&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FillingContainer(::Player*, int, ::SharedTypes::Legacy::ContainerType);

    MCNAPI int _addResource(::ItemStack const&);

    MCNAPI void _doDrop(::ItemStack&, bool);

    MCNAPI int _getFreeSlot() const;

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);

    MCNAPI void $removeItem(int, int);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI int $removeResource(::ItemStack const&, bool, bool, int);

    MCNAPI void $swapSlots(int, int);

    MCNAPI bool $add(::ItemStack&);

    MCNAPI bool $canAdd(::ItemStack const&) const;

    MCNAPI void $clearSlot(int);

    MCNAPI int $clearInventory(int);

    MCNAPI std::unique_ptr<ListTag> $saveToTag(::SaveContext const&) const;

    MCNAPI void $loadFromTag(::ListTag const&);

    MCNAPI void $_trySetInSlot(::ItemStack&, int const&, int const&, int&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
