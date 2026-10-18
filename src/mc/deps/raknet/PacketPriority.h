#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum PacketPriority : uint {
    IMMEDIATE_PRIORITY   = 0,
    HIGH_PRIORITY        = 1,
    MEDIUM_PRIORITY      = 2,
    LOW_PRIORITY         = 3,
    NUMBER_OF_PRIORITIES = 4,
#else // @header-generator platform
enum class PacketPriority : int {
    ImmediatePriority  = 0,
    HighPriority       = 1,
    MediumPriority     = 2,
    LowPriority        = 3,
    NumberOfPriorities = 4,
#endif // @header-generator platform
};
