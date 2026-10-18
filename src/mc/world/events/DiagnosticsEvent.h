#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/profile/ScopeDataSummary.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/profiler/ScopeDataSummary.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ServerboundDiagnosticsPacket;
#else // @header-generator platform
namespace Bedrock::Profile::Whisker::Diagnostics { struct ScopeDataSummary; }
#endif // @header-generator platform
// clang-format on

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    ::ll::TypedStorage<8, 32, ::std::string>                                                             mPlayerName;
#endif // @header-generator platform
    // NOLINTEND
};
