#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class Font;
class ScreenContext;
class Vec2;
namespace mce { class Color; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LatencyGraphDisplay {
public:
    // LatencyGraphDisplay inner types declare
    // clang-format off
    struct Measurement;
    // clang-format on

    // LatencyGraphDisplay inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Measurement {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimePoint;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLatency;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&> mNetwork;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mArea;
    ::ll::TypedStorage<1, 1, bool> mIsInGame;
    ::ll::TypedStorage<8, 24, std::vector<LatencyGraphDisplay::Measurement>> mLatencyMeasurements;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastLatencyUpdate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LatencyGraphDisplay& operator=(LatencyGraphDisplay const&);
    LatencyGraphDisplay(LatencyGraphDisplay const&);
    LatencyGraphDisplay();
#else // @header-generator platform
    struct Measurement {};
#endif // @header-generator platform
};
