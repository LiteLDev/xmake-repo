#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryRateLimitConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                               maxEventsPerWindow;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> rateLimitWindow;
    ::ll::TypedStorage<4, 4, float>                                              sampleRate;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk2e79a4;
    ::ll::UntypedStorage<8, 8> mUnk5d5ea0;
    ::ll::UntypedStorage<4, 4> mUnkb1d559;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptSentryRateLimitConfig& operator=(ScriptSentryRateLimitConfig const&);
    ScriptSentryRateLimitConfig(ScriptSentryRateLimitConfig const&);
    ScriptSentryRateLimitConfig();
#endif // @header-generator platform
};

} // namespace ScriptModuleDiagnostics
