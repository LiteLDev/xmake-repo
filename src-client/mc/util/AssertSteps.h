#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {

enum class AssertSteps : int {
    LogAssert          = 0,
    PresentModal       = 1,
    FireCallbacks      = 2,
    FireTelemetry      = 3,
    UpdateCrashDumpLog = 4,
    ThrowException     = 5,
    EarlyDebugBreak    = 6,
    Count              = 7,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
