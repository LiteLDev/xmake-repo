#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

#if defined(LL_PLAT_A) // @header-generator platform
enum LogChannel : int {
#else // @header-generator platform
enum class LogChannel : int {
#endif // @header-generator platform
    Global         = 0,
    ClientSide     = 1,
    ServerSide     = 2,
    NumLogChannels = 3,
};

}
