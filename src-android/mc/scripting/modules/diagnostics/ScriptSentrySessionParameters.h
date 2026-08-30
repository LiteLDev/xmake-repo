#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/ScriptSentryRateLimitConfig.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentrySessionParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                            sentryDsn;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleVersion;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleName;
    ::ll::TypedStorage<8, 24, std::string>                                            moduleUuid;
    ::ll::TypedStorage<8, 24, std::string>                                            runtimeName;
    ::ll::TypedStorage<8, 24, std::string>                                            platformName;
    ::ll::TypedStorage<1, 1, uchar>                                                   maxBreadcrumbs;
    ::ll::TypedStorage<1, 1, bool>                                                    debugLoggingEnabled;
    ::ll::TypedStorage<8, 24, ::ScriptModuleDiagnostics::ScriptSentryRateLimitConfig> rateLimitConfig;
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
