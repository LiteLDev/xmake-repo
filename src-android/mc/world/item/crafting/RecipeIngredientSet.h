#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
// clang-format on

class RecipeIngredientSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, int>> mSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
