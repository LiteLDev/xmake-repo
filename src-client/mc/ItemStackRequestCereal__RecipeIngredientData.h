#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct RecipeIngredientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk3f547a;
    ::ll::UntypedStorage<2, 2>  mUnkdbd135;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeIngredientData& operator=(RecipeIngredientData const&);
    RecipeIngredientData(RecipeIngredientData const&);
    RecipeIngredientData();
};

} // namespace ItemStackRequestCereal
