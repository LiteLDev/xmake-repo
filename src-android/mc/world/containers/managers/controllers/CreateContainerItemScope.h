#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScope.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemInstance;
struct ItemTransferAmount;
struct SlotData;
// clang-format on

struct CreateContainerItemScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SlotData const* const>               mSrcSlot;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerController>> mCreatedItemContainerController;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope>              mItemStackRequestScope;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateContainerItemScope(
        ::ItemStackRequestScope&&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount,
        std::shared_ptr<ContainerController>
    );

    MCNAPI void _createItemStack(
        ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount
    );

    MCNAPI ~CreateContainerItemScope();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CreateContainerItemScope _createInnerScope(
        ::ItemStackRequestScope const&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount,
        std::shared_ptr<ContainerController>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ItemStackRequestScope&&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount,
        std::shared_ptr<ContainerController>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
