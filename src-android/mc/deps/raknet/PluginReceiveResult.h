#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum PluginReceiveResult : uint {
    RR_STOP_PROCESSING_AND_DEALLOCATE = 0,
    RR_CONTINUE_PROCESSING            = 1,
    RR_STOP_PROCESSING                = 2,
};

}
