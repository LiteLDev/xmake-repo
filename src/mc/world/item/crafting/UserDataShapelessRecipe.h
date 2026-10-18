#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/Recipe.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class CraftingContext;
class ItemDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class UserDataShapelessRecipe : public ::ShapelessRecipe {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mResults;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mResults;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UserDataShapelessRecipe();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UserDataShapelessRecipe();
#else // @header-generator platform
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const;

    virtual bool itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual bool itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& ID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> const& $assemble(::CraftingContainer&, ::CraftingContext&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemInstance> const& $assemble(::CraftingContainer& craftSlots, ::CraftingContext&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $itemsMatch(::ItemDescriptor const&, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;


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
