#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/multiplayer/ProcessingTimestampType.h"

namespace persona::multiplayer::appearance {

struct ProcessingTimestamp {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::persona::multiplayer::appearance::ProcessingTimestampType> mType;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTime;
    // clang-format on
    // NOLINTEND
};

} // namespace persona::multiplayer::appearance
