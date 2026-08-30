#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TimeStep {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float const> mDeltaTime;
    ::ll::TypedStorage<4, 4, float const> mDeltaTimeSquared;
    ::ll::TypedStorage<4, 4, float> mAlpha;
    ::ll::TypedStorage<4, 4, float> mInterpolatedTime;
    ::ll::TypedStorage<1, 1, bool> mFastForward;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TimeStep(TimeStep const&);
    TimeStep();
};

} // namespace mce
