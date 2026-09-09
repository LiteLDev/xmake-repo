#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapedRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class HashedString;
class ItemInstance;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class ShapedChemistryRecipe : public ::ShapedRecipe {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShapedChemistryRecipe();

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;

    virtual ::mce::UUID const& getId() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;

    MCNAPI ::mce::UUID const& $getId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
