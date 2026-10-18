#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangCompileResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Failed_Error                              = 0,
    Failed_NeedsArraysToBeResolved            = 1,
    Failed_NeedsResourceVariablesToBeResolved = 2,
    Success                                   = 3,
#else // @header-generator platform
    FailedError                              = 0,
    FailedNeedsArraysToBeResolved            = 1,
    FailedNeedsResourceVariablesToBeResolved = 2,
    Success                                  = 3,
#endif // @header-generator platform
};
