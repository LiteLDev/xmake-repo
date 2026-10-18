#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/ScriptSentryRateLimitConfig.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleDiagnostics {

struct ScriptSentrySessionParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                            sentryDsn;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleVersion;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleName;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleUuid;
    ::ll::TypedStorage<8, 24, std::string>                                            runtimeName;
    ::ll::TypedStorage<8, 24, std::string>                                            platformName;
    ::ll::TypedStorage<1, 1, uchar>                                                   maxBreadcrumbs;
    ::ll::TypedStorage<1, 1, bool>                                                    debugLoggingEnabled;
    ::ll::TypedStorage<8, 24, ::ScriptModuleDiagnostics::ScriptSentryRateLimitConfig> rateLimitConfig;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb56f32;
    ::ll::UntypedStorage<8, 32> mUnk173d41;
    ::ll::UntypedStorage<8, 32> mUnk128087;
    ::ll::UntypedStorage<8, 32> mUnkf1d405;
    ::ll::UntypedStorage<8, 32> mUnk53c6c8;
    ::ll::UntypedStorage<8, 32> mUnkea57ac;
    ::ll::UntypedStorage<1, 1>  mUnk40264f;
    ::ll::UntypedStorage<1, 1>  mUnke7958c;
    ::ll::UntypedStorage<8, 24> mUnk5e1aa9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptSentrySessionParameters& operator=(ScriptSentrySessionParameters const&);
    ScriptSentrySessionParameters(ScriptSentrySessionParameters const&);
    ScriptSentrySessionParameters();
#endif // @header-generator platform
};

} // namespace ScriptModuleDiagnostics
