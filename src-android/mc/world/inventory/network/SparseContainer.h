#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemAddType.h"
#include "mc/world/containers/controllers/ItemSetType.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStackBase;
struct FullContainerName;
// clang-format on

class SparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // SparseContainer inner types define
    using ItemNetworkChangedCallback = std::function<void(int, const ItemStack&, const ItemStack&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SparseContainerBackingSetType const> mBackingSetType;
    ::ll::TypedStorage<8, 8, ::Container&> mBackingContainer;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ItemStack>> mItems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISparseContainerSetListener>> mNetManagerSetter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPlayerContainerSetter>> mPlayerSetter;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<void (int, const ItemStack&, const ItemStack&)>>> mItemNetworkChangedCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<bool (int, const ItemStackBase&, int)>>> mItemAllowedInSlotCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<bool (const ItemStackBase&)>>> mItemAllowedToAddCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<int (int, const ItemStackBase&)>>> mAvailableSetCountCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<bool (int)>>> mValidSlotForContainerCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<bool (const ItemStackBase&)>>> mItemAllowedToRemoveCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::function<bool (const ItemStackBase&)>>> mItemAllowedInContainerCallbacks;
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<1, 1, bool const> mIsItemStackNetManagerEnabled;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainer();

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void removeItem(int, int);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void containerContentChanged(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SparseContainer(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        bool,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );

    MCNAPI void _clearCreatedItem(int);

    MCNAPI int _getAvailableAddCount(::ContainerScreenContext const&, ::ContainerEnumName, ::ItemStack const&) const;

    MCNAPI bool _isItemAllowedInSlot(::ContainerEnumName, int, ::ItemStackBase const&, int) const;

    MCNAPI bool _isSlotInRange(int) const;

    MCNAPI bool _isValidSlotForContainer(::ContainerEnumName, int) const;

    MCNAPI void addAvailableSetCountCallback(::ContainerEnumName, std::function<int(int, const ItemStackBase&)>);

    MCNAPI void addItemAllowedInContainerCallback(::ContainerEnumName, std::function<bool(const ItemStackBase&)>);

    MCNAPI void addItemAllowedInSlotCallback(::ContainerEnumName, std::function<bool(int, const ItemStackBase&, int)>);

    MCNAPI void addItemAllowedToAddCallback(::ContainerEnumName, std::function<bool(const ItemStackBase&)>);

    MCNAPI void addItemAllowedToRemoveCallback(::ContainerEnumName, std::function<bool(const ItemStackBase&)>);

    MCNAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName,
        std::function<void(int, const ItemStack&, const ItemStack&)>
    );

    MCNAPI void addValidSlotForContainerCallback(::ContainerEnumName, std::function<bool(int)>);

    MCNAPI ::ItemAddType
    canAdd(::ContainerScreenContext const&, ::FullContainerName const&, int, ::ItemStackBase const&, int) const;

    MCNAPI bool canConsume(::ContainerEnumName, int const, int const) const;

    MCNAPI bool canDestroy(::ContainerEnumName, int const, int const) const;

    MCNAPI bool canDrop(::ContainerEnumName, int const, int const) const;

    MCNAPI bool canRemove(::ContainerEnumName, int const, int) const;

    MCNAPI ::ItemSetType
    canSet(::ContainerScreenContext const&, ::FullContainerName const&, int, ::ItemStackBase const&, int) const;

    MCNAPI int getAvailableAddCount(::ContainerScreenContext const&, ::ContainerEnumName, int) const;

    MCNAPI int
    getAvailableAddCount(::ContainerScreenContext const&, ::ContainerEnumName, int, ::ItemStackBase const&) const;

    MCNAPI int getAvailableSetCount(
        ::ContainerScreenContext const&,
        ::FullContainerName const&,
        int,
        ::ItemStackBase const&
    ) const;

    MCNAPI bool isClientSide() const;

    MCNAPI bool isUsingLegacyScreenTransactions() const;

    MCNAPI bool isValidSlot(::ContainerEnumName, int) const;

    MCNAPI void removeItemNetworkChangedCallback(::ContainerEnumName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        bool,
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

    MCNAPI void $removeItem(int, int);

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
