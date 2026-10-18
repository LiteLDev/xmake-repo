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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>> mStartTime;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk4a961d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Whisker_ScopeStackStorage& operator=(Whisker_ScopeStackStorage const&);
    Whisker_ScopeStackStorage(Whisker_ScopeStackStorage const&);
    Whisker_ScopeStackStorage();
#endif // @header-generator platform
};

} // namespace Bedrock::Profile
