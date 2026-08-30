#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ContainerScreenContext;
class CraftHandlerBase;
class ItemStackRequestActionConsume;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING;
class ItemStackRequestActionCreate;
class ItemStackRequestActionHandler;
class Player;
class SimpleSparseContainer;
struct ContainerValidationCraftInputs;
struct FullContainerName;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionCraftHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&>            mRequestActionHandler;
    ::ll::TypedStorage<8, 8, ::Player&>                                   mPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftHandlerBase>>           mCraftHandler;
    ::ll::TypedStorage<1, 1, bool>                                        mIsCraftRequest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SimpleSparseContainer>>     mCreatedOutputSparseContainer;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemInstance, uint>>> mCraftResults;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionCraftHandler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionCraftHandler(::ItemStackRequestActionHandler&, ::Player&);

    MCNAPI std::shared_ptr<SimpleSparseContainer> _getOrInitSparseContainer(::FullContainerName const&);

    MCNAPI ::ItemStackNetResult _initCraftResults(std::vector<ItemInstance> const&, uchar);

    MCNAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const&);

    MCNAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar const);

    MCNAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const&);

    MCNAPI ::ItemStackNetResult endRequest(::ItemStackNetResult const);

    MCNAPI void endRequestBatch();

    MCNAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const&);

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
