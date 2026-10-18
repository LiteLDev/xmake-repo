#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CoRoutineResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mNumJobsExecuted;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk4cbe63;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CoRoutineResult& operator=(CoRoutineResult const&);
    CoRoutineResult(CoRoutineResult const&);
    CoRoutineResult();
#endif // @header-generator platform
};

} // namespace Scripting
