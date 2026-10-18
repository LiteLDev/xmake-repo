#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/ContainerEnumName.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#include "mc/world/inventory/simulation/ContainerValidationDebug.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationLayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenValidatorBase;
class ContainerValidationBase;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
#else // @header-generator platform
#endif // @header-generator platform
class SimpleSparseContainer;
struct ContainerIterationRange;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ContainerValidationLayer;
#endif // @header-generator platform
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct ContainerValidationSlotInfo;
// clang-format on

class ContainerScreenValidation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                          mScreenContext;
    ::ll::TypedStorage<4, 4, ::ContainerValidationCaller>                        mCaller;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, uint64>> mContainerIndexMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::ContainerValidationBase const>>>
        mContainerValidatorMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>>>
                                                                                mPredictiveContainers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidatorBase>> mContainerScreenValidator;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationLayer>>        mValidationStack;
    ::ll::TypedStorage<4, 12, ::ContainerValidationDebug const>                 mDebug;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenValidation();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerScreenValidation();
#else // @header-generator platform
    virtual ~ContainerScreenValidation() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerValidationResult tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerValidationCraftResult getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    virtual ::ContainerValidationCraftResult
    getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
#endif // @header-generator platform

    virtual ::ContainerValidationResult tryActivate();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerScreenValidation(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
#else // @header-generator platform
    MCAPI ContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _commit();
#else // @header-generator platform
    MCAPI void _commit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationSlotInfo _createContainerValidatorSlotInfo(::ContainerValidationSlotData const&);
#else // @header-generator platform
    MCAPI ::ContainerValidationSlotInfo
    _createContainerValidatorSlotInfo(::ContainerValidationSlotData const& slotData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _dropItems();
#else // @header-generator platform
    MCAPI bool _dropItems();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _propagateContainers();
#else // @header-generator platform
    MCAPI bool _propagateContainers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack _tryRemoveItem(::ContainerValidationSlotInfo&, int);
#else // @header-generator platform
    MCAPI bool
    _tryMoveItem(::ContainerValidationSlotInfo& srcValidatorPair, ::ContainerValidationSlotInfo& dstValidatorPair);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _trySetItem(::ContainerValidationSlotInfo&, ::ItemStack const&, bool, bool, bool);
#else // @header-generator platform
    MCAPI ::ItemStack _tryRemoveItem(::ContainerValidationSlotInfo& slotInfo, int amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult
    _tryTransferSpecial(::ContainerValidationSlotData const&, int const, ::ContainerScreenRequestActionType const);
#else // @header-generator platform
    MCAPI int _trySetItem(
        ::ContainerValidationSlotInfo& slotInfo,
        ::ItemStack const&             stack,
        bool                           isWholeStackTransfer,
        bool                           allowPartialSuccess,
        bool                           isInternalTransfer
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ContainerIterationRange> getContainerIterator(::ContainerValidationSlotData const&);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlotData,
        int                                  transferAmount,
        ::ContainerScreenRequestActionType   actionType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SimpleSparseContainer> getOrCreateSparseContainer(::FullContainerName const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::ContainerIterationRange>
    getContainerIterator(::ContainerValidationSlotData const& slotData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCraftingImplemented();
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::SimpleSparseContainer>
    getOrCreateSparseContainer(::FullContainerName const& containerEnumName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryCommitActionResults();
#else // @header-generator platform
    MCAPI bool tryCommitActionResults();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const&, int const);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const& srcSlotData, int transferAmount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult tryDestroy(::ContainerValidationSlotData const&, int const);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult
    tryDrop(::ContainerValidationSlotData const& srcSlotData, int transferAmount, bool dropRandomly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult tryDrop(::ContainerValidationSlotData const&, int const, bool const);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult
    trySwap(::ContainerValidationSlotData const& srcSlotData, ::ContainerValidationSlotData const& dstSlotData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult
    trySwap(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerValidationResult
    tryTransfer(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&, int const, bool);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult tryTransfer(
        ::ContainerValidationSlotData const& srcSlotData,
        ::ContainerValidationSlotData const& dstSlotData,
        int                                  transferAmount,
        bool                                 isAllowingPartialTransfer
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ContainerScreenValidation> makeContainerScreenValidation(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ContainerScreenValidation> makeContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller,
        std::unordered_map<FullContainerName, std::shared_ptr<Container>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult $tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    MCAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult $tryActivate();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::ContainerValidationResult $tryActivate();
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
