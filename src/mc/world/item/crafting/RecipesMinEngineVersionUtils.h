#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
// clang-format on

class RecipesMinEngineVersionUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isLegagcyRecipe(::MinEngineVersion const&);
#else // @header-generator platform
    MCAPI static bool isLegagcyRecipe(::MinEngineVersion const& minEngineVersion);
#endif // @header-generator platform
    // NOLINTEND
};
