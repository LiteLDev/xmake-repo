#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> LastScreen;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastBeat;
    ::ll::TypedStorage<8, 8, long const> mBeatCadenceSeconds;
    ::ll::TypedStorage<8, 8, long> mBeatCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastAntiIdle;
    ::ll::TypedStorage<1, 1, bool> mWasIdleLastBeat;
    ::ll::TypedStorage<8, 8, long const> mIdleTime;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beat();
    // NOLINTEND
};

} // namespace Social::Events
