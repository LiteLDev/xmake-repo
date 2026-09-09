#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class SaveContext;
namespace Bedrock::Threading { class SharedRecursiveMutex; }
// clang-format on

class LockingFillingContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>> mContainerContextMutex;
    ::ll::TypedStorage<4, 4, int>                                                      mWeightInStorageItem;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    LockingFillingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LockingFillingContainer();

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual void swapSlots(int, int);

    virtual int clearInventory(int);

    virtual std::unique_ptr<ListTag> saveToTag(::SaveContext const&) const;

    virtual void _trySetInSlot(::ItemStack&, int const&, int const&, int&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LockingFillingContainer(
        int,
        ::SharedTypes::Legacy::ContainerType,
        std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>,
        bool
    );

    MCNAPI int getWeightInStorageItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(int, ::SharedTypes::Legacy::ContainerType, std::weak_ptr<Bedrock::Threading::SharedRecursiveMutex>, bool);
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

    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);

    MCNAPI void $swapSlots(int, int);

    MCNAPI int $clearInventory(int);

    MCNAPI std::unique_ptr<ListTag> $saveToTag(::SaveContext const&) const;

    MCNAPI void $_trySetInSlot(::ItemStack&, int const&, int const&, int&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
