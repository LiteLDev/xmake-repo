#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class REExecStateEnum : int {
    Split             = 0,
    Lookahead         = 1,
    NegativeLookahead = 2,
    GreedyQuant       = 3,
};
#endif // @header-generator platform
