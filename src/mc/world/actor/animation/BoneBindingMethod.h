#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum BoneBindingMethod : uchar {
#else // @header-generator platform
enum class BoneBindingMethod : uchar {
#endif // @header-generator platform
    Unset                  = 0,
    LocalHierarchy         = 1,
    MatchingParentBoneName = 2,
    BindingExpression      = 3,
};
