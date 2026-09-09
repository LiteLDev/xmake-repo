#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PredictedMovementSystem {

struct SystemUniforms {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mEnableMovementPredictionLogging;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNow;
    // clang-format on
    // NOLINTEND
};

} // namespace PredictedMovementSystem
