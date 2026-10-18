#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class ItemStackRequestActionCraftBase;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftHandler;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class Recipe;
class Recipes;
// clang-format on

class CraftHandlerSmithingTable : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerSmithingTable();
#else // @header-generator platform
    virtual ~CraftHandlerSmithingTable() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Recipes const* _getLevelRecipes() const;
#else // @header-generator platform
    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _recipeMatches(::Recipe const&, ::CraftingContainer&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool _recipeMatches(::Recipe const& recipe, ::CraftingContainer& currentCraftingItems) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
