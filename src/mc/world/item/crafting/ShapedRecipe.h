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

class ShapedRecipe : public ::Recipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAssumeSymmetry;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ShapedRecipe& operator=(ShapedRecipe const&);
    ShapedRecipe();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ShapedRecipe();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ShapedRecipe() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ShapedRecipe() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getCraftingSize() const;
#else // @header-generator platform
    virtual int getCraftingSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int, int) const;
#else // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isShapeless() const;
#else // @header-generator platform
    virtual bool isShapeless() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;
#else // @header-generator platform
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int size() const;
#else // @header-generator platform
    virtual int size() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ShapedRecipe(::Recipe::ConstructionContext&&, int, int, bool);

    MCNAPI bool assumeSymmetry() const;

    MCNAPI bool matches(::CraftingContainer const&, int, int, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Recipe::ConstructionContext&&, int, int, bool);
#else // @header-generator platform
    MCAPI bool matches(::CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getCraftingSize() const;
#else // @header-generator platform
    MCAPI int $getCraftingSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RecipeIngredient const& $getIngredient(int, int) const;
#else // @header-generator platform
    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isShapeless() const;
#else // @header-generator platform
    MCFOLD bool $isShapeless() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;
#else // @header-generator platform
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $size() const;
#else // @header-generator platform
    MCAPI int $size() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
