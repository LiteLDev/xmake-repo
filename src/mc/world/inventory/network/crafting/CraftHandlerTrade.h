#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionCraftBase;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionCraftRecipeAuto;
class MerchantRecipe;
#else // @header-generator platform
#endif // @header-generator platform
struct FullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
// clang-format on

class CraftHandlerTrade : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<1, 1, bool>                            mIsTrade2;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<ulong>>           mTradeIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mTradeIndex;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                             mNumCrafts;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerTrade& operator=(CraftHandlerTrade const&);
    CraftHandlerTrade(CraftHandlerTrade const&);
    CraftHandlerTrade();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerTrade();
#else // @header-generator platform
    virtual ~CraftHandlerTrade() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _postCraftRequest(bool const);
#else // @header-generator platform
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::tuple<ItemStackNetResult, const MerchantRecipe*>
           _getMerchantRecipeFromNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _initResultItem(::RecipeNetId const& tradeRecipeNetId, uchar const numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult _initResultItem(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI ::ItemStackNetResult _initTrade2Consumes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _initTrade2Consumes();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_postCraftRequest(bool const wasSuccess);
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
