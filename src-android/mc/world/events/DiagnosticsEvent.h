#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeDataSummary.h"
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
class ServerboundDiagnosticsPacket;
// clang-format on

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    ::ll::TypedStorage<8, 24, std::string>                                                           mPlayerName;
    // NOLINTEND

public:
    // prevent constructor by default
    DiagnosticsEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DiagnosticsEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
