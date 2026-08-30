#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class FireworksRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    FireworksRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireworksRecipe();

    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual int getCraftingSize() const;

    virtual ::RecipeIngredient const& getIngredient(int, int) const;

    virtual bool isShapeless() const;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;

    virtual int size() const;

    virtual std::vector<ItemInstance> const& getResultItems() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireworksRecipe(std::string const&, ::mce::UUID const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID& ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::mce::UUID const*);
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

    MCNAPI std::vector<ItemInstance> const& $getResultItems() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
