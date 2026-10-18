#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/modules/server_admin/ScriptSecretString.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleDiagnostics {

struct ScriptSentryOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64>                                                                  dsn;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                               maxBreadcrumbs;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                               sampleRate;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                debug;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                                maxEventsPerWindow;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> rateLimitWindow;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkae338d;
    ::ll::UntypedStorage<1, 2>  mUnkb02b12;
    ::ll::UntypedStorage<4, 8>  mUnkf42df6;
    ::ll::UntypedStorage<1, 2>  mUnke57931;
    ::ll::UntypedStorage<4, 8>  mUnk511fab;
    ::ll::UntypedStorage<8, 16> mUnkfecabe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryOptions& operator=(ScriptSentryOptions const&);
    ScriptSentryOptions(ScriptSentryOptions const&);
    ScriptSentryOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
