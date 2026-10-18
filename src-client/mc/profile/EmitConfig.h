#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct EmitConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mWhiskerData;
    ::ll::TypedStorage<1, 1, bool>                                           mGraphicsData;
    ::ll::TypedStorage<8, 24, std::string>                                   mEmitReason;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mTemp_GameSessionLength;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
