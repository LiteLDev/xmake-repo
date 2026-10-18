#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class SmithingTransformRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mRuntimeResults;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mRuntimeResults;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    SmithingTransformRecipe();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    SmithingTransformRecipe();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SmithingTransformRecipe();
#else // @header-generator platform
    virtual bool matches(::CraftingContainer const& craftingContainer, ::CraftingContext const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftingContainer, ::CraftingContext&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SmithingTransformRecipe(
        std::string const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::Recipe::Results&&,
        ::HashedString const&
    );

    MCNAPI ::RecipeIngredient const& getAdditionIngredient() const;

    MCNAPI ::RecipeIngredient const& getBaseIngredient() const;

    MCNAPI ::ItemInstance const& getResult() const;

    MCNAPI ::RecipeIngredient const& getTemplateIngredient() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI SmithingTransformRecipe(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::Recipe::Results&&       results,
        ::HashedString const&     tag
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& ID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& ID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::string const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::RecipeIngredient const&,
        ::Recipe::Results&&,
        ::HashedString const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&      recipeId,
        ::RecipeIngredient const& templateIngredient,
        ::RecipeIngredient const& baseIngredient,
        ::RecipeIngredient const& additionIngredient,
        ::Recipe::Results&&       results,
        ::HashedString const&     tag
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    MCAPI bool $matches(::CraftingContainer const& craftingContainer, ::CraftingContext const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftingContainer, ::CraftingContext&) const;
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
