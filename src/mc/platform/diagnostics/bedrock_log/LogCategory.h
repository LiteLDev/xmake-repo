#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

#if defined(LL_PLAT_A) // @header-generator platform
enum LogCategory : uint {
#else // @header-generator platform
enum class LogCategory : int {
#endif // @header-generator platform
    LogArea          = 0,
    LogWorldGen      = 1,
    LogLoot          = 2,
    LogRender        = 3,
    LogStructure     = 4,
    LogUI            = 5,
    LogOnline        = 6,
    NumLogCategories = 7,
};

}
