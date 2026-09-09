#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum PacketPriority : uint {
    IMMEDIATE_PRIORITY   = 0,
    HIGH_PRIORITY        = 1,
    MEDIUM_PRIORITY      = 2,
    LOW_PRIORITY         = 3,
    NUMBER_OF_PRIORITIES = 4,
};
