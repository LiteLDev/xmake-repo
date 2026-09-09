#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryRateLimitConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                               maxEventsPerWindow;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> rateLimitWindow;
    ::ll::TypedStorage<4, 4, float>                                              sampleRate;
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
