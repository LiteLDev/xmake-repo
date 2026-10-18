#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Recipes;
// clang-format on

class ChemistryRecipes {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addRecipes(::Recipes&);
#else // @header-generator platform
    MCAPI static void addRecipes(::Recipes& r);
#endif // @header-generator platform
    // NOLINTEND
};
