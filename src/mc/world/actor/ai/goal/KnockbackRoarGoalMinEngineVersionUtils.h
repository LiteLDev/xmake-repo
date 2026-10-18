#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
// clang-format on

class KnockbackRoarGoalMinEngineVersionUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool shouldDoFilterEvaluateFix(::MinEngineVersion const&);
#else // @header-generator platform
    MCAPI static bool shouldDoFilterEvaluateFix(::MinEngineVersion const& minEngineVersion);
#endif // @header-generator platform
    // NOLINTEND
};
