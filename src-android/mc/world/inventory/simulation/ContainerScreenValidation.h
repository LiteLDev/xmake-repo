#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#include "mc/world/inventory/simulation/ContainerValidationDebug.h"
#include "mc/world/inventory/simulation/ContainerValidationLayer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenValidatorBase;
class ContainerValidationBase;
class ItemStack;
class ItemStackBase;
class SimpleSparseContainer;
struct ContainerIterationRange;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct ContainerValidationSlotInfo;
// clang-format on

class ContainerScreenValidation {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mScreenContext;
    ::ll::TypedStorage<4, 4, ::ContainerValidationCaller> mCaller;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, ulong>> mContainerIndexMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, std::shared_ptr<const ContainerValidationBase>>> mContainerValidatorMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<FullContainerName, std::shared_ptr<Container>>> mPredictiveContainers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenValidatorBase>> mContainerScreenValidator;
    ::ll::TypedStorage<8, 24, std::vector<ContainerValidationLayer>> mValidationStack;
    ::ll::TypedStorage<4, 12, ::ContainerValidationDebug const> mDebug;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerScreenValidation();

    virtual ::ContainerValidationResult tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    virtual ::ContainerValidationCraftResult getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    virtual ::ContainerValidationResult tryActivate();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenValidation(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
    );

    MCNAPI void _commit();

    MCNAPI ::ContainerValidationSlotInfo _createContainerValidatorSlotInfo(::ContainerValidationSlotData const&);

    MCNAPI bool _dropItems();

    MCNAPI bool _propagateContainers();

    MCNAPI ::ItemStack _tryRemoveItem(::ContainerValidationSlotInfo&, int);

    MCNAPI int _trySetItem(::ContainerValidationSlotInfo&, ::ItemStack const&, bool, bool, bool);

    MCNAPI ::ContainerValidationResult
    _tryTransferSpecial(::ContainerValidationSlotData const&, int const, ::ContainerScreenRequestActionType const);

    MCNAPI std::optional<ContainerIterationRange> getContainerIterator(::ContainerValidationSlotData const&);

    MCNAPI std::shared_ptr<SimpleSparseContainer> getOrCreateSparseContainer(::FullContainerName const&);

    MCNAPI bool isCraftingImplemented();

    MCNAPI bool tryCommitActionResults();

    MCNAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const&, int const);

    MCNAPI ::ContainerValidationResult tryDestroy(::ContainerValidationSlotData const&, int const);

    MCNAPI ::ContainerValidationResult tryDrop(::ContainerValidationSlotData const&, int const, bool const);

    MCNAPI ::ContainerValidationResult
    trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerValidationResult
    tryTransfer(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, int const, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ContainerScreenValidation> makeContainerScreenValidation(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
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
    MCNAPI ::ContainerValidationResult $tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    MCNAPI ::ContainerValidationResult $tryActivate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
