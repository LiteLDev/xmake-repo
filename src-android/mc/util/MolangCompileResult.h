#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangCompileResult : int {
    Failed_Error                              = 0,
    Failed_NeedsArraysToBeResolved            = 1,
    Failed_NeedsResourceVariablesToBeResolved = 2,
    Success                                   = 3,
};
