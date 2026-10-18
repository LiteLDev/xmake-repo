#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class RecipeIngredient;
namespace mce { class UUID; }
// clang-format on

class MapExtendingRecipe : public ::MultiRecipe {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mResults;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mResults;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MapExtendingRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MapExtendingRecipe();
#else // @header-generator platform
    virtual bool matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const&
    assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getCraftingSize() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const& getResultItems() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int, int) const;
#else // @header-generator platform
    virtual int getCraftingSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const;
#else // @header-generator platform
    virtual ::RecipeIngredient const& getIngredient(int x, int y) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int size() const;

    virtual std::vector<ItemInstance> const& getResultItems() const;
#else // @header-generator platform
    virtual int size() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MapExtendingRecipe(std::string const&, ::mce::UUID const&);
#else // @header-generator platform
    MCAPI MapExtendingRecipe(::std::string const& recipeId, ::mce::UUID const& id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& CartographyTableID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& CartographyTableID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& CraftingTableID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& CraftingTableID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::mce::UUID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& recipeId, ::mce::UUID const& id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    MCAPI bool $matches(::CraftingContainer const& craftSlots, ::CraftingContext const& craftingContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getCraftingSize() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemInstance> const&
    $assemble(::CraftingContainer& craftSlots, ::CraftingContext& craftingContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RecipeIngredient const& $getIngredient(int, int) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $matches(::CraftingContainer const&, ::CraftingContext const&) const;
#else // @header-generator platform
    MCFOLD int $getCraftingSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $size() const;
#else // @header-generator platform
    MCFOLD ::RecipeIngredient const& $getIngredient(int x, int y) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $getResultItems() const;
#else // @header-generator platform
    MCFOLD int $size() const;


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
