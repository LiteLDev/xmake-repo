#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerDimensionWaitComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mWaitingForServerDimensionChangeAcknowledgment;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mServerDimensionChangeTimer;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& DIMENSION_CHANGE_TIMEOUT();
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForServerDimensionChangeAcknowledgment;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mServerDimensionChangeTimer;
#endif // @header-generator platform
    // NOLINTEND
};
