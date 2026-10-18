#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CraftingContainer;
class CreativeItemRegistry;
class ItemInstance;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ItemStackRequestActionCraftBase;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionCraftRecipeAuto;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Recipe;
#else // @header-generator platform
#endif // @header-generator platform
class Recipes;
struct FullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
// clang-format on

class CraftHandlerCrafting : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                    mWorkbench;
    ::ll::TypedStorage<8, 8, ::Player&>               mPlayer;
    ::ll::UntypedStorage<4, 4>                        mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                   mDeferredCraftCount;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mConsumedItems;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                        mWorkbench;
    ::ll::TypedStorage<8, 8, ::Player&>                   mPlayer;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>               mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                       mDeferredCraftCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mConsumedItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&);
    CraftHandlerCrafting(CraftHandlerCrafting const&);
    CraftHandlerCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerCrafting();
#else // @header-generator platform
    virtual ~CraftHandlerCrafting() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);
#else // @header-generator platform
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
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
    MCAPI ::ItemStackNetResult $preHandleAction(::ItemStackRequestActionType requestActionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Recipes const* $_getLevelRecipes() const;
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
