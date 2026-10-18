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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker::Diagnostics { struct ScopeDataSummary; }
// clang-format on
#endif // @header-generator platform

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerboundDiagnosticsPacketPayload(::ServerboundDiagnosticsPacketPayload const&);

    MCNAPI ::ServerboundDiagnosticsPacketPayload& operator=(::ServerboundDiagnosticsPacketPayload&&);

    MCNAPI ::ServerboundDiagnosticsPacketPayload& operator=(::ServerboundDiagnosticsPacketPayload const&);

    MCNAPI ~ServerboundDiagnosticsPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerboundDiagnosticsPacketPayload const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ServerboundDiagnosticsPacketPayload();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
