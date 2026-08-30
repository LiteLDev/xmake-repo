#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct DurationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::variant<int, std::chrono::duration<long long, std::ratio<1, 1000>>>> mTime;
    // NOLINTEND
};

} // namespace ServerSoundRuntime
