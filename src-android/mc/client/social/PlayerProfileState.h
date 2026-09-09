#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileError.h"
#include "mc/client/social/State.h"

namespace Social {

struct PlayerProfileState {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::Social::State> xblState;
    ::ll::TypedStorage<4, 4, ::Social::State> platformState;
    ::ll::TypedStorage<1, 1, bool> deferredMSA;
    ::ll::TypedStorage<1, 1, bool> deferredPlatform;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> xblLastFetched;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> platformLastFetched;
    ::ll::TypedStorage<4, 4, ::Social::ProfileError> xblProfileError;
    ::ll::TypedStorage<4, 4, ::Social::ProfileError> platformProfileError;
    // clang-format on
    // NOLINTEND
};

} // namespace Social
