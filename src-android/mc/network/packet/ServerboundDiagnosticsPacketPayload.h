#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeDataSummary.h"
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerboundDiagnosticsPacketPayload(::ServerboundDiagnosticsPacketPayload const&);

    MCNAPI ::ServerboundDiagnosticsPacketPayload& operator=(::ServerboundDiagnosticsPacketPayload&&);

    MCNAPI ::ServerboundDiagnosticsPacketPayload& operator=(::ServerboundDiagnosticsPacketPayload const&);

    MCNAPI ~ServerboundDiagnosticsPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerboundDiagnosticsPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
