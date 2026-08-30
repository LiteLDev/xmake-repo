#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStatMetrics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> sentPackets;
    ::ll::TypedStorage<4, 4, uint> sentBytes;
    ::ll::TypedStorage<4, 4, uint> receivedPackets;
    ::ll::TypedStorage<4, 4, uint> receivedBytes;
    // NOLINTEND
};
