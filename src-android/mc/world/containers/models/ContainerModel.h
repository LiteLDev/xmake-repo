#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class DynamicContainerTracker;
class ItemDescriptor;
class ItemInstance;
class ItemStackBase;
class SparseContainerClient;
// clang-format on

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<8, 24, std::string> mContainerStringName;
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::Legacy::ContainerType, std::function<void (int, const ItemStack&, const ItemStack&)>>> mTrackedOnContainerChangedCallbacks;
    ::ll::UntypedStorage<8, 32> mOnContainerChangedCallbacks;
    ::ll::UntypedStorage<8, 48> mPlayerNotificationCallbacks;
    ::ll::TypedStorage<4, 4, ::ContainerCategory> mContainerCategory;
    ::ll::TypedStorage<8, 24, std::vector<SlotData>> mItemSource;
    ::ll::TypedStorage<8, 8, ::SparseContainerClient*> mClientUIContainer;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerModel();

    virtual void containerContentChanged(int);

    virtual void postInit();

    virtual void releaseResources();

    virtual int getContainerSize() const;

    virtual int getFilteredContainerSize() const;

    virtual void tick(int);

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual ::ItemStack const& getItemStack(int) const;

    virtual std::vector<ItemStack> const& getItems() const;

    virtual ::ItemInstance const& getItemInstance(int) const;

    virtual ::ItemStackBase const& getItemStackBase(int) const;

    virtual bool isItemInstanceBased() const;

    virtual void setItem(int, ::ItemStack const&);

    virtual bool isValid();

    virtual bool isItemFiltered(::ItemStackBase const&) const;

    virtual bool isExpanableItemFiltered(int) const;

    virtual ::ContainerExpandStatus getItemExpandStatus(int) const;

    virtual std::string const& getItemGroupName(int) const;

    virtual void switchItemExpando(int);

    virtual bool isSlotDisabled(int) const;

    virtual void refreshContainer(bool);

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _init();

    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerModel(::FullContainerName const&, int, ::ContainerCategory, bool);

    MCNAPI void _clearCreatedItem(int);

    MCNAPI void _onClientUIItemNetworkChanged(int, ::ItemStack const&, ::ItemStack const&);

    MCNAPI void _setCreatedItem(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, int, ::ItemStack const&);

    MCNAPI bool _useLegacyTransactions() const;

    MCNAPI ::SparseContainerClient const* getClientUIContainer() const;

    MCNAPI ::ContainerCategory getContainerCategory() const;

    MCNAPI ::ContainerEnumName getContainerEnumName() const;

    MCNAPI int getContainerSlot(int) const;

    MCNAPI std::string const& getContainerStringName() const;

    MCNAPI ::FullContainerName getFullContainerName() const;

    MCNAPI int getItemCount(::ItemDescriptor const&) const;

    MCNAPI ::SlotData const& getItemSource(int) const;

    MCNAPI int getModelSlot(int) const;

    MCNAPI int getValidIngredientItemCount(::ItemDescriptor const&) const;

    MCNAPI void initContainerRuntimeId();

    MCNAPI bool isIntermediaryCategory() const;

    MCNAPI void networkUpdateItem(int, ::ItemStack const&, ::ItemStack const&);

    MCNAPI void receiveContainerLifetimes(::DynamicContainerTracker const&);

    MCNAPI void registerOnContainerChangedCallback(std::function<void(int, const ItemStack&, const ItemStack&)>);

    MCNAPI void registerPlayerNotificationCallback(std::function<void(int, const ItemStack&, const ItemStack&)>);

    MCNAPI void registerTrackedOnContainerChangedCallback(
        std::function<void(int, const ItemStack&, const ItemStack&)>,
        ::SharedTypes::Legacy::ContainerType
    );

    MCNAPI void resize(int);

    MCNAPI void serverInitItemStackIds();

    MCNAPI void setClientUIContainer(::SparseContainerClient*);

    MCNAPI void setItemSource(int, ::SlotData const&);

    MCNAPI void unregisterTrackedOnContainerChangedCallback(::SharedTypes::Legacy::ContainerType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FullContainerName const&, int, ::ContainerCategory, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);

    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getFilteredContainerSize() const;

    MCNAPI void $tick(int);

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI ::ItemStack const& $getItemStack(int) const;

    MCNAPI std::vector<ItemStack> const& $getItems() const;

    MCNAPI ::ItemInstance const& $getItemInstance(int) const;

    MCNAPI ::ItemStackBase const& $getItemStackBase(int) const;

    MCNAPI bool $isItemInstanceBased() const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI bool $isValid();

    MCNAPI bool $isItemFiltered(::ItemStackBase const&) const;

    MCNAPI bool $isExpanableItemFiltered(int) const;

    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int) const;

    MCNAPI std::string const& $getItemGroupName(int) const;

    MCNAPI void $switchItemExpando(int);

    MCNAPI bool $isSlotDisabled(int) const;

    MCNAPI void $refreshContainer(bool);

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_init();

    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
