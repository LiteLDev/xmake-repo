#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
class ItemStackBase;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionCraftRecipeAuto;
class MerchantRecipe;
struct FullContainerName;
// clang-format on

class CraftHandlerTrade : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<1, 1, bool>                            mIsTrade2;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>           mTradeIndex;
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
    virtual ~CraftHandlerTrade();

    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);

    virtual void _postCraftRequest(bool const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::tuple<ItemStackNetResult, const MerchantRecipe*>
           _getMerchantRecipeFromNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&);

    MCNAPI ::ItemStackNetResult _initResultItem(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, uchar const);

    MCNAPI ::ItemStackNetResult _initTrade2Consumes();
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

    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
