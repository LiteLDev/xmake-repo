#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenContext;
class CraftHandlerBase;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class ItemStackRequestActionConsume;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCreate;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionHandler;
class Player;
class SimpleSparseContainer;
#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerValidationCraftInputs;
struct FullContainerName;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ItemStackRequestActionCraftHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&>            mRequestActionHandler;
    ::ll::TypedStorage<8, 8, ::Player&>                                   mPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftHandlerBase>>           mCraftHandler;
    ::ll::TypedStorage<1, 1, bool>                                        mIsCraftRequest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SimpleSparseContainer>>     mCreatedOutputSparseContainer;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mCraftResults;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&>                  mRequestActionHandler;
    ::ll::TypedStorage<8, 8, ::Player&>                                         mPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftHandlerBase>>             mCraftHandler;
    ::ll::TypedStorage<1, 1, bool>                                              mIsCraftRequest;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SimpleSparseContainer>>       mCreatedOutputSparseContainer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mCraftResults;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionCraftHandler();
#else // @header-generator platform
    virtual ~ItemStackRequestActionCraftHandler() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionCraftHandler(::ItemStackRequestActionHandler&, ::Player&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _initCraftResults(::std::vector<::ItemInstance> const& results, uchar numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SimpleSparseContainer> _getOrInitSparseContainer(::FullContainerName const&);
#else // @header-generator platform
    MCAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const& itemInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult _initCraftResults(std::vector<ItemInstance> const&, uchar);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar const);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult endRequest(::ItemStackNetResult const);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult
    handleCraftResults(::ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void endRequestBatch();
#else // @header-generator platform
    MCAPI bool isCraftRequest() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const&);
#else // @header-generator platform
    MCAPI void onContainerScreenOpen(::ContainerScreenContext const& screenContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI ::ItemStackNetResult handleCraftResults(::ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);

    MCNAPI ::ItemStackNetResult handleCreate(::ItemStackRequestActionCreate const&);

    MCNAPI bool isCraftRequest() const;

    MCNAPI void onContainerScreenOpen(::ContainerScreenContext const&);

    MCNAPI void postRequest(bool const);

    MCNAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackRequestActionHandler&, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
