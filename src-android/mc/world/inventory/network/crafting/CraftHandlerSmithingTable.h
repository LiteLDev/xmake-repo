#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
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
    virtual ~CraftHandlerSmithingTable();

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);

    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _recipeMatches(::Recipe const&, ::CraftingContainer&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
