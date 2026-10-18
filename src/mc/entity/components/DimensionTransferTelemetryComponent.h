#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

struct DimensionTransferTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::DimensionType> mFromId;
    ::ll::TypedStorage<4, 4, ::DimensionType> mToId;
    ::ll::TypedStorage<8, 24, std::string> mPackId;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mFromId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mToId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mPackId;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DimensionTransferTelemetryComponent& operator=(DimensionTransferTelemetryComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
