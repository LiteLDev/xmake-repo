#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemAddType.h"
#include "mc/world/containers/controllers/ItemSetType.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ItemStackBase;
struct FullContainerName;
// clang-format on

class SparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // SparseContainer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ItemNetworkChangedCallback = std::function<void(int, const ItemStack&, const ItemStack&)>;
#else // @header-generator platform
    using ItemNetworkChangedCallback = ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SparseContainerBackingSetType const>            mBackingSetType;
    ::ll::TypedStorage<8, 8, ::Container&>                                     mBackingContainer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ItemStack>>          mItems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ISparseContainerSetListener>> mNetManagerSetter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPlayerContainerSetter>>      mPlayerSetter;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mItemNetworkChangedCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<bool(int, ::ItemStackBase const&, int)>>>
        mItemAllowedInSlotCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
        mItemAllowedToAddCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<int(int, ::ItemStackBase const&)>>>
        mAvailableSetCountCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(int)>>>
        mValidSlotForContainerCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
        mItemAllowedToRemoveCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
                                         mItemAllowedInContainerCallbacks;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<1, 1, bool const> mIsItemStackNetManagerEnabled;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SparseContainer();
#else // @header-generator platform
    virtual ~SparseContainer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeItem(int, int);
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void removeItem(int slot, int count) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SparseContainer(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        bool,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int _getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        ::ItemStack const&              itemInSlot
    ) const;

    MCAPI void addAvailableSetCountCallback(
        ::ContainerEnumName                               name,
        ::std::function<int(int, ::ItemStackBase const&)> availableSetCountCallback
    );

    MCAPI void addItemAllowedInContainerCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI void addItemAllowedInSlotCallback(
        ::ContainerEnumName                                     name,
        ::std::function<bool(int, ::ItemStackBase const&, int)> itemAllowedCallback
    );

    MCAPI void addItemAllowedToAddCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI void addItemAllowedToRemoveCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );
#endif

    MCAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName                                                name,
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> itemNetworkChangedCallback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearCreatedItem(int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addValidSlotForContainerCallback(
        ::ContainerEnumName        name,
        ::std::function<bool(int)> validSlotForContainerCallback
    );

    MCAPI ::ItemAddType canAdd(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      openContainerNetId,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI bool canRemove(::ContainerEnumName name, int slot, int amount) const;

    MCAPI ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI int getAvailableAddCount(::ContainerScreenContext const& context, ::ContainerEnumName name, int slot) const;

    MCAPI int getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        int                             slot,
        ::ItemStackBase const&          itemToAdd
    ) const;

    MCAPI int getAvailableSetCount(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void removeItemNetworkChangedCallback(::ContainerEnumName name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCFOLD void $containerContentChanged(int slot);

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCFOLD void $serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>);

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCFOLD void $removeItem(int slot, int count);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
