#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScope.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackRequestIdTag;
#endif // @header-generator platform
struct ItemTransferAmount;
struct SlotData;
// clang-format on

struct CreateContainerItemScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SlotData const* const>               mSrcSlot;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerController>> mCreatedItemContainerController;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope>              mItemStackRequestScope;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SlotData const* const>                   mSrcSlot;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerController>> mCreatedItemContainerController;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestScope>                  mItemStackRequestScope;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CreateContainerItemScope();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI CreateContainerItemScope(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );

    MCNAPI void _createItemStack(
        ::ItemStackRequestId const& currentRequestId,
        ::SlotData const&           createdItemOutputSlot,
        ::ItemInstance const&       item,
        ::ItemTransferAmount        takeAmount
    );

    MCNAPI ~CreateContainerItemScope();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CreateContainerItemScope _createInnerScope(
        ::ItemStackRequestScope const&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount,
        std::shared_ptr<ContainerController>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::CreateContainerItemScope _createInnerScope(
        ::ItemStackRequestScope const&           requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ItemStackRequestScope&&,
        ::SlotData const&,
        ::ItemInstance const&,
        ::ItemTransferAmount,
        std::shared_ptr<ContainerController>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::ItemStackRequestScope&&                requestScope,
        ::SlotData const&                        createdItemOutputSlot,
        ::ItemInstance const&                    item,
        ::ItemTransferAmount                     takeAmount,
        ::std::shared_ptr<::ContainerController> createdItemOutputContainerController
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
