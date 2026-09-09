#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

enum LogChannel : int {
    Global         = 0,
    ClientSide     = 1,
    ServerSide     = 2,
    NumLogChannels = 3,
};

}
