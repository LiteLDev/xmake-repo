#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/AutoPlaceTarget.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenTransferBehaviour.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenActionScope;
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerScreenTemporaryActionScope;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenValidation;
#if defined(LL_PLAT_A) // @header-generator platform
class IContainerTransfer;
#else // @header-generator platform
#endif // @header-generator platform
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AutoPlaceTarget;
#endif // @header-generator platform
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct FullContainerName;
struct ItemTransferAmount;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IContainerTransfer;
#endif // @header-generator platform
// clang-format on

class ContainerScreenSimulation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>              mCurrentScope;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                  mScreenContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenValidation>> mScreenValidation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContainerTransfer>>        mContainerTransferInterface;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::vector<ContainerEnumName>>> mCoalesceOrderMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::vector<AutoPlaceTarget>>>   mAutoPlaceOrderMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>                  mCurrentScope;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                      mScreenContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidation>> mScreenValidation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContainerTransfer>>        mContainerTransferInterface;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::vector<::ContainerEnumName>>>
        mCoalesceOrderMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::vector<::AutoPlaceTarget>>>
        mAutoPlaceOrderMap;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ContainerScreenSimulation();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenSimulation();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerScreenSimulation();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ContainerScreenSimulation() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ContainerScreenSimulation() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult trySplitSingle(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, std::vector<ContainerSimulationSplitStack>&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult trySplitMultiple(::ContainerValidationSlotData const&, int, ::ItemInstance const&, ::ContainerValidationSlotData const&, std::vector<ContainerSimulationSplitStack>&, int&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);
#endif // @header-generator platform

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerScreenSimulation(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller const,
        std::unique_ptr<IContainerTransfer>&&,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
    );

    MCNAPI ::ContainerScreenActionResult _tryTransfer(
        ::ItemTransferType const,
        ::ContainerValidationSlotData const&,
        ::ContainerValidationSlotData const&,
        ::ItemTransferAmount const,
        ::ContainerScreenTransferBehaviour
    );

    MCNAPI ::ContainerScreenActionResult
    _tryTransferSpecial(::ContainerValidationSlotData const&, ::ItemTransferAmount const, ::ItemSpecialLocation);

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerValidationResult);

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerScreenActionResult);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ContainerScreenSimulation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCNAPI ::ContainerScreenActionResult _tryTransfer(
        ::ItemTransferType const             transferType,
        ::ContainerValidationSlotData const& srcSlot,
        ::ContainerValidationSlotData const& dstSlot,
        ::ItemTransferAmount const           transferAmount,
        ::ContainerScreenTransferBehaviour   transferBehaviour
    );

    MCNAPI ::ContainerScreenActionResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount const           transferAmount,
        ::ItemSpecialLocation                location
    );

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerScreenActionResult result);

    MCNAPI ::ContainerScreenActionResult _updateCurrentScope(::ContainerValidationResult result);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller const,
        std::unique_ptr<IContainerTransfer>&&,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unique_ptr<::IContainerTransfer>&&                                 containerTransferInterface,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    MCNAPI ::ContainerScreenActionResult $tryPlaceAmount(
        ::ContainerValidationSlotData const& srcSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& dstSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const& srcSlot, ::ContainerValidationSlotData const& dstSlot);

    MCNAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const& slotA, ::ContainerValidationSlotData const& slotB);

    MCNAPI ::ContainerScreenActionResult $tryAddToStack(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTakeType                       type
    );

    MCNAPI ::ContainerScreenActionResult
    $tryCoalesce(::ContainerValidationSlotData const& dstSlot, ::ContainerEnumName coalesceContainerEnum);

    MCNAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    MCNAPI ::ContainerScreenActionResult $trySplitSingle(
        ::ContainerValidationSlotData const&            srcSlot,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems
    );

    MCNAPI ::ContainerScreenActionResult $trySplitMultiple(
        ::ContainerValidationSlotData const&            srcSlot,
        int                                             progressiveTake,
        ::ItemInstance const&                           itemTemplate,
        ::ContainerValidationSlotData const&            dstSlot,
        ::std::vector<::ContainerSimulationSplitStack>& containerSplitItemStackItems,
        int&                                            splitItemRemainder
    );

    MCNAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount, bool randomly);

    MCNAPI ::ContainerScreenActionResult
    $tryDestroy(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI ::ContainerScreenActionResult
    $tryConsume(::ContainerValidationSlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const& srcSlot);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);

    MCNAPI ::ContainerScreenActionResult $tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);

    MCNAPI ::ContainerScreenActionResult
    $tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    MCNAPI ::ContainerScreenActionResult $trySplitSingle(
        ::ContainerValidationSlotData const&,
        ::ContainerValidationSlotData const&,
        std::vector<ContainerSimulationSplitStack>&
    );

    MCNAPI ::ContainerScreenActionResult $trySplitMultiple(
        ::ContainerValidationSlotData const&,
        int,
        ::ItemInstance const&,
        ::ContainerValidationSlotData const&,
        std::vector<ContainerSimulationSplitStack>&,
        int&
    );

    MCNAPI ::ContainerScreenActionResult
    $tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);

    MCNAPI ::ContainerScreenActionResult $tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    MCNAPI ::ContainerScreenActionResult $tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    MCNAPI ::ContainerScreenActionResult $tryConsumeExpected(::ContainerValidationSlotData const&);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
