#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class HashedString;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class SmithingTrimRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mRuntimeResults;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTrimRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTrimRecipe();

    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;

    virtual bool hasDataDrivenResult() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SmithingTrimRecipe(
        std::string const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::HashedString const&
    );

    MCNAPI ::RecipeIngredient const& getAdditionIngredient() const;

    MCNAPI ::RecipeIngredient const& getBaseIngredient() const;

    MCNAPI ::RecipeIngredient const& getTemplateIngredient() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::HashedString const&
    );
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

    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;

    MCNAPI bool $hasDataDrivenResult() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
