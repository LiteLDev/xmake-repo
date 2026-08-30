#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/AllowedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedSlotConsume.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class Recipe;
class Recipes;
class SimpleSparseContainer;
struct FullContainerName;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
// clang-format on

class CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionCraftHandler&> mCraftRequestHandler;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType>          mCraftActionType;
    ::ll::TypedStorage<1, 1, bool>                                  mNonImplementedTrustClientResults;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<1, 1, bool>                                  mIsCraftRequest;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerBase();

    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    virtual void endRequestBatch();

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) = 0;

    virtual void _postCraftRequest(bool const);

    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftHandlerBase(::ItemStackRequestActionCraftHandler&);

    MCNAPI std::tuple<ItemStackNetResult, const Recipe*>
           _getRecipeFromNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&);

    MCNAPI bool _isNonImplementedTrustClientResults() const;

    MCNAPI std::shared_ptr<SimpleSparseContainer> _tryGetSparseContainer(::FullContainerName const&);

    MCNAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const);

    MCNAPI ::ItemStackNetResult endRequest(::ItemStackNetResult const);

    MCNAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const&, ::ItemStackNetResult const);

    MCNAPI bool isCraftRequest();

    MCNAPI void postRequest(bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackRequestActionCraftHandler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    MCNAPI ::ItemStackNetResult $preHandleAction(::ItemStackRequestActionType);

    MCNAPI void $endRequestBatch();

    MCNAPI void $_postCraftRequest(bool const);

    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
