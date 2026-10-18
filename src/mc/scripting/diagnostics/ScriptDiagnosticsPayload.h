#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/ScopeDataSummary.h"
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ScriptDiagnosticsPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 24, std::string>                                                  mPlayerName;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk4389a3;
    ::ll::UntypedStorage<8, 32> mUnk5e063d;
    ::ll::UntypedStorage<8, 80> mUnkdb83b4;
    ::ll::UntypedStorage<8, 24> mUnk433f9f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPayload& operator=(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDiagnosticsPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
