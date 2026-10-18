#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // TelemetryHeartbeat inner types declare
    // clang-format off
    struct nowFunc;
    // clang-format on

    // TelemetryHeartbeat inner types define
    struct nowFunc {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3252d9;
    ::ll::UntypedStorage<8, 8>  mUnke888c1;
    ::ll::UntypedStorage<8, 8>  mUnkcfacbe;
    ::ll::UntypedStorage<8, 8>  mUnka0f533;
    ::ll::UntypedStorage<8, 8>  mUnkca21a1;
    ::ll::UntypedStorage<8, 8>  mUnk34bdf6;
    ::ll::UntypedStorage<1, 1>  mUnk1411e0;
    ::ll::UntypedStorage<8, 8>  mUnk156261;
    ::ll::UntypedStorage<8, 64> mUnk8a4a2b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TelemetryHeartbeat& operator=(TelemetryHeartbeat const&);
    TelemetryHeartbeat(TelemetryHeartbeat const&);
    TelemetryHeartbeat();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beat();
    // NOLINTEND
};

} // namespace Social::Events
