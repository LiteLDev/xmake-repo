#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

struct DimensionTransferTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::DimensionType> mFromId;
    ::ll::TypedStorage<4, 4, ::DimensionType> mToId;
    ::ll::TypedStorage<8, 24, std::string> mPackId;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionTransferTelemetryComponent& operator=(DimensionTransferTelemetryComponent const&);
};
