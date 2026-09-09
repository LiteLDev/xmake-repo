#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace Bedrock::Profile {

struct Whisker_ScopeStackStorage {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>> mStartTime;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Profile
