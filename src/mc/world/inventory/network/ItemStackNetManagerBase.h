#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ContainerScreenContext;
class ContainerWeakRef;
class EntityRegistry;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackNetManagerScreenStack;
class ItemStackRequestAction;
class Player;
class SparseContainer;
struct FullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
#endif // @header-generator platform
// clang-format on

class ItemStackNetManagerBase {
public:
    // ItemStackNetManagerBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using LegacyRequestScope = ::gsl::final_action<std::function<void()>>;
#else // @header-generator platform
    using BaseContainerSetter = ::std::function<void(::ItemStack const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BaseContainerSetter = std::function<void(const ItemStack&)>;
#else // @header-generator platform
    using LegacyRequestScope = ::gsl::final_action<::std::function<void()>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                                      mIsEnabled;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<8, 8, ::Player&>                                       mPlayer;
    ::ll::UntypedStorage<1, 16>                                               mLevelWeakRegistry;
    ::ll::UntypedStorage<1, 16>                                               mEntityRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackNetManagerScreenStack>> mScreenStack;
    ::ll::TypedStorage<1, 1, bool>                                            mCurrentRequestHasCraftAction;
    ::ll::UntypedStorage<8, 16>                                               mLegacyTransactionRequestId;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                                          mIsEnabled;
    ::ll::TypedStorage<1, 1, bool const>                                          mIsClientSide;
    ::ll::TypedStorage<8, 8, ::Player&>                                           mPlayer;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>                        mLevelWeakRegistry;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EntityRegistry>>                       mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerScreenStack>> mScreenStack;
    ::ll::TypedStorage<1, 1, bool>                                                mCurrentRequestHasCraftAction;
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId>                         mLegacyTransactionRequestId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerBase& operator=(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ItemStackNetManagerBase();

    virtual bool isEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const = 0;
#else // @header-generator platform
    virtual ::ItemStackRequestId getRequestId() const = 0;
#endif // @header-generator platform

    virtual bool retainSetItemStackNetIdVariant() const;

    virtual bool allowInventoryTransactionManager() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onContainerScreenOpen(::ContainerScreenContext const&);
#else // @header-generator platform
    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest();

    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform

    virtual void onContainerScreenClose();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);
#else // LL_PLAT_C
    virtual ::SparseContainer* initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::final_action<std::function<void ()>> _tryBeginClientLegacyTransactionRequest();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );
#else // LL_PLAT_C
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // clang-format on
#else // @header-generator platform
    virtual void _initScreen(::ItemStackNetManagerScreen& screen);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackNetManagerBase(::Player&, bool, bool);
#else // @header-generator platform
    MCAPI ItemStackNetManagerBase(::Player& player, bool isClientSide, bool isEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetManagerScreenStack& _getScreenStack();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _isRequestActionAllowed(::ItemStackRequestAction const& requestAction);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isRequestActionAllowed(::ItemStackRequestAction const&);
#else // @header-generator platform
    MCAPI void _pushScreen(::ContainerScreenContext screenContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _pushScreen(::ContainerScreenContext);

    MCNAPI ::ContainerScreenContext const& getScreenContext() const;

    MCNAPI bool isClientSide() const;

    MCNAPI bool isScreenOpen() const;
#else // @header-generator platform
    MCAPI ::ContainerScreenContext const& getScreenContext() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest(::Player*);
#else // @header-generator platform
    MCAPI static ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest(::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool setPlayerContainer(
        ::Player&,
        ::SharedTypes::Legacy::ContainerType,
        int,
        ::ItemStack const&,
        ::ItemStack&,
        std::function<void(const ItemStack&)> const&
#else // @header-generator platform
    MCAPI static bool setPlayerContainer(
        ::Player&                                        player,
        ::SharedTypes::Legacy::ContainerType             containerType,
        int                                              slot,
        ::ItemStack const&                               item,
        ::ItemStack&                                     slotItem,
        ::std::function<void(::ItemStack const&)> const& callback
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player&, bool, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::Player& player, bool isClientSide, bool isEnabled);
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
    MCNAPI bool $isEnabled() const;
#else // @header-generator platform
    MCFOLD bool $isEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $retainSetItemStackNetIdVariant() const;
#else // @header-generator platform
    MCFOLD bool $retainSetItemStackNetIdVariant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const&);
#else // @header-generator platform
    MCAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onContainerScreenClose();
#else // @header-generator platform
    MCAPI void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);
#else // @header-generator platform
    MCAPI void $onContainerScreenClose();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::final_action<std::function<void()>> $_tryBeginClientLegacyTransactionRequest();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);
#else // LL_PLAT_C
    MCFOLD ::SparseContainer* $initOpenContainer(
        ::BlockSource&             region,
        ::FullContainerName const& openContainerId,
        ::ContainerWeakRef const&  containerWeakRef
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $_addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );
#else // LL_PLAT_C
    MCFOLD void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&         screen,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_initScreen(::ItemStackNetManagerScreen& screen);
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
