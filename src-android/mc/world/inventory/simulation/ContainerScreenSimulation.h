#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/AutoPlaceTarget.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenTransferBehaviour.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenActionScope;
class ContainerScreenTemporaryActionScope;
class ContainerScreenValidation;
class IContainerTransfer;
class ItemInstance;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct FullContainerName;
struct ItemTransferAmount;
// clang-format on

class ContainerScreenSimulation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>              mCurrentScope;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                  mScreenContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenValidation>> mScreenValidation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContainerTransfer>>        mContainerTransferInterface;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::vector<ContainerEnumName>>> mCoalesceOrderMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContainerEnumName, std::vector<AutoPlaceTarget>>>   mAutoPlaceOrderMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenSimulation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerScreenSimulation();

    virtual ::ContainerScreenActionResult tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryPlaceAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryAddToStack(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, ::ItemTakeType);

    virtual ::ContainerScreenActionResult tryCoalesce(::ContainerValidationSlotData const&, ::ContainerEnumName);

    virtual ::ContainerScreenActionResult tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    virtual ::ContainerScreenActionResult trySplitSingle(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, std::vector<ContainerSimulationSplitStack>&);

    virtual ::ContainerScreenActionResult trySplitMultiple(::ContainerValidationSlotData const&, int, ::ItemInstance const&, ::ContainerValidationSlotData const&, std::vector<ContainerSimulationSplitStack>&, int&);

    virtual ::ContainerScreenActionResult tryDrop(::ContainerValidationSlotData const&, ::ItemTransferAmount const, bool);

    virtual ::ContainerScreenActionResult tryDestroy(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    virtual ::ContainerScreenActionResult tryConsume(::ContainerValidationSlotData const&, ::ItemTransferAmount const);

    virtual ::ContainerScreenActionResult tryConsumeExpected(::ContainerValidationSlotData const&);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller const,
        std::unique_ptr<IContainerTransfer>&&,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
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
    MCNAPI ::ContainerScreenActionResult
    $tryPlaceOne(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryPlaceAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
