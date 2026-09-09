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
// clang-format on

class ItemStackNetManagerBase {
public:
    // ItemStackNetManagerBase inner types define
    using LegacyRequestScope = ::gsl::final_action<std::function<void()>>;

    using BaseContainerSetter = std::function<void(const ItemStack&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                      mIsEnabled;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<8, 8, ::Player&>                                       mPlayer;
    ::ll::UntypedStorage<1, 16>                                               mLevelWeakRegistry;
    ::ll::UntypedStorage<1, 16>                                               mEntityRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackNetManagerScreenStack>> mScreenStack;
    ::ll::TypedStorage<1, 1, bool>                                            mCurrentRequestHasCraftAction;
    ::ll::UntypedStorage<8, 16>                                               mLegacyTransactionRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerBase& operator=(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ItemStackNetManagerBase();

    virtual bool isEnabled() const;

    virtual ::TypedClientNetId<ItemStackRequestIdTag, int, 0> getRequestId() const = 0;

    virtual bool retainSetItemStackNetIdVariant() const;

    virtual bool allowInventoryTransactionManager() const = 0;

    virtual void onContainerScreenOpen(::ContainerScreenContext const&);

    virtual void onContainerScreenClose();

    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    virtual ::gsl::final_action<std::function<void ()>> _tryBeginClientLegacyTransactionRequest();

    virtual void _addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackNetManagerBase(::Player&, bool, bool);

    MCNAPI ::ItemStackNetManagerScreenStack& _getScreenStack();

    MCNAPI bool _isRequestActionAllowed(::ItemStackRequestAction const&);

    MCNAPI void _pushScreen(::ContainerScreenContext);

    MCNAPI ::ContainerScreenContext const& getScreenContext() const;

    MCNAPI bool isClientSide() const;

    MCNAPI bool isScreenOpen() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest(::Player*);

    MCNAPI static bool setPlayerContainer(
        ::Player&,
        ::SharedTypes::Legacy::ContainerType,
        int,
        ::ItemStack const&,
        ::ItemStack&,
        std::function<void(const ItemStack&)> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isEnabled() const;

    MCNAPI bool $retainSetItemStackNetIdVariant() const;

    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const&);

    MCNAPI void $onContainerScreenClose();

    MCNAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCNAPI ::gsl::final_action<std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void
    $_addLegacyTransactionRequestSetItemSlot(::ItemStackNetManagerScreen&, ::SharedTypes::Legacy::ContainerType, int);

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
