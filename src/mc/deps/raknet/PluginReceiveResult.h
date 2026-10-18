#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum PluginReceiveResult : uint {
    RR_STOP_PROCESSING_AND_DEALLOCATE = 0,
    RR_CONTINUE_PROCESSING            = 1,
    RR_STOP_PROCESSING                = 2,
#else // @header-generator platform
enum class PluginReceiveResult : int {
    StopProcessingAndDeallocate = 0,
    ContinueProcessing          = 1,
    StopProcessing              = 2,
#endif // @header-generator platform
};

}
