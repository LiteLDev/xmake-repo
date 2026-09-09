#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CreativeItemRegistry;
class ItemInstance;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionCraftRecipeAuto;
class Player;
class Recipe;
class Recipes;
struct FullContainerName;
// clang-format on

class CraftHandlerCrafting : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                    mWorkbench;
    ::ll::TypedStorage<8, 8, ::Player&>               mPlayer;
    ::ll::UntypedStorage<4, 4>                        mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                   mDeferredCraftCount;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mConsumedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&);
    CraftHandlerCrafting(CraftHandlerCrafting const&);
    CraftHandlerCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerCrafting();

    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);

    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftHandlerCrafting(bool, ::Player&, ::ItemStackRequestActionCraftHandler&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, ::Player&, ::ItemStackRequestActionCraftHandler&);
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

    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
