#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/AllowedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedSlotConsume.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class Recipe;
#else // @header-generator platform
#endif // @header-generator platform
class Recipes;
#if defined(LL_PLAT_A) // @header-generator platform
class SimpleSparseContainer;
#else // @header-generator platform
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
#endif // @header-generator platform
struct FullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionCraftHandler&> mCraftRequestHandler;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType>          mCraftActionType;
    ::ll::TypedStorage<1, 1, bool>                                  mNonImplementedTrustClientResults;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<1, 1, bool>                                  mIsCraftRequest;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionCraftHandler&>     mCraftRequestHandler;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType>              mCraftActionType;
    ::ll::TypedStorage<1, 1, bool>                                      mNonImplementedTrustClientResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<1, 1, bool>                                      mIsCraftRequest;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerBase();
#else // @header-generator platform
    virtual ~CraftHandlerBase() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);
#else // @header-generator platform
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType);
#endif // @header-generator platform

    virtual void endRequestBatch();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) = 0;
#else // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _postCraftRequest(bool const);
#else // @header-generator platform
    virtual void _postCraftRequest(bool const wasSuccess);
#endif // @header-generator platform

    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CraftHandlerBase(::ItemStackRequestActionCraftHandler&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::ItemStackNetResult
    handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction, ::ItemStackNetResult currentResult);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void postRequest(bool wasSuccess);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $preHandleAction(::ItemStackRequestActionType);
#else // @header-generator platform
    MCFOLD ::ItemStackNetResult $preHandleAction(::ItemStackRequestActionType requestActionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $endRequestBatch();
#else // @header-generator platform
    MCFOLD void $endRequestBatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_postCraftRequest(bool const);
#else // @header-generator platform
    MCFOLD void $_postCraftRequest(bool const wasSuccess);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::Recipes const* $_getLevelRecipes() const;
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
