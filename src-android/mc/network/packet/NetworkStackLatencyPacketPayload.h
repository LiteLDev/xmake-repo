#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStackLatencyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreateTime;
    ::ll::TypedStorage<1, 1, bool> mFromServer;
    // clang-format on
    // NOLINTEND
};
