#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
// clang-format on

class RecipeIngredientSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<int, int>> mSet;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, int>> mSet;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RecipeIngredientSet();

    MCNAPI void add(::ItemStackBase const&);

    MCNAPI void add(std::vector<ItemStack> const&);

    MCNAPI bool empty() const;

    MCNAPI bool operator!=(::RecipeIngredientSet const&) const;

    MCNAPI ~RecipeIngredientSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void add(::ItemStackBase const& item);

    MCAPI ~RecipeIngredientSet();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
