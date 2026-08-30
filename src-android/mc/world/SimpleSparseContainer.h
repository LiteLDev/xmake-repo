#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
// clang-format on

class SimpleSparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // SimpleSparseContainer inner types define
    using SparseContainerData = std::unordered_map<int, ItemStack>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container&>                                 mBackingContainer;
    ::ll::TypedStorage<4, 4, ::SparseContainerBackingSetType const>        mBackingSetType;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ItemStack>>          mItems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISparseContainerSetListener>> mSparseContainerSetListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPlayerContainerSetter>>      mPlayerSetter;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&);
    SimpleSparseContainer(SimpleSparseContainer const&);
    SimpleSparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleSparseContainer();

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void containerContentChanged(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimpleSparseContainer(
        ::Container&,
        ::SparseContainerBackingSetType const,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );

    MCNAPI void clearItem(int);

    MCNAPI void pushAllToBackingContainer();

    MCNAPI void setCreatedItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Container&,
        ::SparseContainerBackingSetType const,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );
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

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $containerContentChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
