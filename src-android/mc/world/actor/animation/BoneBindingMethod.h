#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum BoneBindingMethod : uchar {
    Unset                  = 0,
    LocalHierarchy         = 1,
    MatchingParentBoneName = 2,
    BindingExpression      = 3,
};
