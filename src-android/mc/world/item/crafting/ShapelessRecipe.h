#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class ItemInstance;
class RecipeIngredient;
// clang-format on

class ShapelessRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapelessRecipe& operator=(ShapelessRecipe const&);
    ShapelessRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShapelessRecipe();

    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual int getCraftingSize() const;

    virtual ::RecipeIngredient const& getIngredient(int, int) const;

    virtual bool isShapeless() const;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;

    virtual int size() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShapelessRecipe(::Recipe::ConstructionContext&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Recipe::ConstructionContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;

    MCNAPI int $getCraftingSize() const;

    MCNAPI ::RecipeIngredient const& $getIngredient(int, int) const;

    MCNAPI bool $isShapeless() const;

    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;

    MCNAPI int $size() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
