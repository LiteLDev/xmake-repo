#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

enum class ContainerItemType : int {
    Normal         = 0,
    CreativeRecipe = 1,
    SurvivalRecipe = 2,
    RecipePreview  = 3,
    Ghost          = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
