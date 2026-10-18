#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PredictedMovementSystem {

struct SystemUniforms {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mEnableMovementPredictionLogging;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNow;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mEnableMovementPredictionLogging;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNow;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PredictedMovementSystem
