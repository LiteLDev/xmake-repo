#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types define
    enum class DimensionState : int {
        Ready                 = 0,
        Pending               = 1,
        WaitingServerResponse = 2,
        WaitingArea           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DimensionStateComponent::DimensionState> mDimensionState;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLoadIntoDimensionTimeout;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionStateComponent(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>   mLoadIntoDimensionTimeout;
#endif // @header-generator platform
    // NOLINTEND
};
