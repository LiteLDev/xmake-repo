#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/server_admin/ScriptSecretString.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                                                  dsn;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                               maxBreadcrumbs;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                               sampleRate;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                debug;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                                maxEventsPerWindow;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> rateLimitWindow;
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
