#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/ContainerEnumName.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/FullContainerName.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/SlotData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
#if defined(LL_PLAT_A) // @header-generator platform
class DynamicContainerTracker;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ItemStackBase;
class SparseContainerClient;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SlotData;
#endif // @header-generator platform
// clang-format on

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<8, 24, std::string> mContainerStringName;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                 mIsClientSide;
    ::ll::TypedStorage<8, 32, ::std::string>             mContainerStringName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::Legacy::ContainerType, std::function<void (int, const ItemStack&, const ItemStack&)>>> mTrackedOnContainerChangedCallbacks;
    ::ll::UntypedStorage<8, 32> mOnContainerChangedCallbacks;
    ::ll::UntypedStorage<8, 48> mPlayerNotificationCallbacks;
    ::ll::TypedStorage<4, 4, ::ContainerCategory> mContainerCategory;
    ::ll::TypedStorage<8, 24, std::vector<SlotData>> mItemSource;
    ::ll::TypedStorage<8, 8, ::SparseContainerClient*> mClientUIContainer;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::SharedTypes::Legacy::ContainerType,
            ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mTrackedOnContainerChangedCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mOnContainerChangedCallbacks;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>
                                                          mPlayerNotificationCallbacks;
    ::ll::TypedStorage<4, 4, ::ContainerCategory>         mContainerCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotData>>  mItemSource;
    ::ll::TypedStorage<8, 8, ::SparseContainerClient*>    mClientUIContainer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerModel();

    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual ~ContainerModel() /*override*/;
#endif // @header-generator platform

    virtual void postInit();

    virtual void releaseResources();

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;

#endif // @header-generator platform
    virtual int getContainerSize() const;

    virtual int getFilteredContainerSize() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(int);
#else // @header-generator platform
    virtual void tick(int selectedSlot);
#endif // @header-generator platform

    virtual ::ContainerWeakRef getContainerWeakRef() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItemStack(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getItemStack(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> const& getItems() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> const& getItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getItemInstance(int) const;
#else // @header-generator platform
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getItemStackBase(int) const;
#else // @header-generator platform
    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const;
#endif // @header-generator platform

    virtual bool isItemInstanceBased() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void setItem(int modelSlot, ::ItemStack const& item);
#endif // @header-generator platform

    virtual bool isValid();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemFiltered(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isItemFiltered(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isExpanableItemFiltered(int) const;
#else // @header-generator platform
    virtual bool isExpanableItemFiltered(int index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerExpandStatus getItemExpandStatus(int) const;
#else // @header-generator platform
    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getItemGroupName(int) const;
#else // @header-generator platform
    virtual ::std::string const& getItemGroupName(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void switchItemExpando(int);
#else // @header-generator platform
    virtual void switchItemExpando(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSlotDisabled(int) const;
#else // @header-generator platform
    virtual bool isSlotDisabled(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshContainer(bool);
#else // @header-generator platform
    virtual void refreshContainer(bool fullRefresh);
#endif // @header-generator platform

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _init();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ContainerModel(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resize(int);
#else // @header-generator platform
    MCAPI void _onClientUIItemNetworkChanged(int containerSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void serverInitItemStackIds();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getItemCount(::ItemDescriptor const& descriptor) const;

    MCAPI int getValidIngredientItemCount(::ItemDescriptor const& descriptor) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setClientUIContainer(::SparseContainerClient*);
#else // @header-generator platform
    MCAPI void networkUpdateItem(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setItemSource(int, ::SlotData const&);
#else // @header-generator platform
    MCAPI void
    registerOnContainerChangedCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unregisterTrackedOnContainerChangedCallback(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCAPI void
    registerPlayerNotificationCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

#ifdef LL_PLAT_C
    MCAPI void registerTrackedOnContainerChangedCallback(
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::SharedTypes::Legacy::ContainerType                               containerType
    );
#endif

    MCAPI void setClientUIContainer(::SparseContainerClient* clientUIContainer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FullContainerName const&, int, ::ContainerCategory, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );
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
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCFOLD void $postInit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInit();
#else // @header-generator platform
    MCAPI void $releaseResources();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseResources();
#else // @header-generator platform
    MCAPI void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getFilteredContainerSize() const;
#else // @header-generator platform
    MCAPI int $getFilteredContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(int);
#else // @header-generator platform
    MCFOLD void $tick(int selectedSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;
#else // @header-generator platform
    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItemStack(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItemStack(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> const& $getItems() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemStack> const& $getItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance const& $getItemInstance(int) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;
#else // LL_PLAT_C
    MCFOLD ::ItemInstance const& $getItemInstance(int modelSlot) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackBase const& $getItemStackBase(int) const;
#else // @header-generator platform
    MCAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemInstanceBased() const;
#else // @header-generator platform
    MCFOLD bool $isItemInstanceBased() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid();
#else // @header-generator platform
    MCFOLD bool $isValid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemFiltered(::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $isItemFiltered(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isExpanableItemFiltered(int) const;
#else // @header-generator platform
    MCFOLD bool $isExpanableItemFiltered(int index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int) const;
#else // @header-generator platform
    MCFOLD ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getItemGroupName(int) const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getItemGroupName(int itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $switchItemExpando(int);
#else // @header-generator platform
    MCFOLD void $switchItemExpando(int itemId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlotDisabled(int) const;
#else // @header-generator platform
    MCFOLD bool $isSlotDisabled(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshContainer(bool);
#else // @header-generator platform
    MCFOLD void $refreshContainer(bool fullRefresh);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $_getContainer() const;
#else // @header-generator platform
    MCFOLD ::Container* $_getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getContainerOffset() const;
#else // @header-generator platform
    MCFOLD int $_getContainerOffset() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_init();
#else // @header-generator platform
    MCAPI void $_init();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
