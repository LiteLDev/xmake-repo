#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

#if defined(LL_PLAT_A) // @header-generator platform
enum LogRule : uint {
#else // @header-generator platform
enum class LogRule : int {
#endif // @header-generator platform
    DefaultRules    = 0,
    ClientAndServer = 1,
};

}
