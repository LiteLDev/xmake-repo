#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ContainerItemType : int {
    Normal         = 0,
    CreativeRecipe = 1,
    SurvivalRecipe = 2,
    RecipePreview  = 3,
    Ghost          = 4,
};
#else // @header-generator platform
enum class ContainerItemType : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
