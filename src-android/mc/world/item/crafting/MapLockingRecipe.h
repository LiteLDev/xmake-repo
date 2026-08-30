#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class MapLockingRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mResults;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mOriginalMapId;
    // NOLINTEND

public:
    // prevent constructor by default
    MapLockingRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapLockingRecipe();

    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual int getCraftingSize() const;

    virtual ::RecipeIngredient const& getIngredient(int, int) const;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;

    virtual int size() const;

    virtual std::vector<ItemInstance> const& getResultItems() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapLockingRecipe(std::string const&, ::mce::UUID const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& CartographyTableID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::mce::UUID const&);
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
