#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeDataSummary.h"
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

struct ScriptDiagnosticsPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 24, std::string>                                                  mPlayerName;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPayload& operator=(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload();
};
