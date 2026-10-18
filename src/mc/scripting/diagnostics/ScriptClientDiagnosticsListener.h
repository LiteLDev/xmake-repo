#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/diagnostics/ScriptDiagnosticsPayload.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventCoordinator;
struct DiagnosticsEvent;
// clang-format on

class ScriptClientDiagnosticsListener : public ::ServerNetworkEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerNetworkEventCoordinator&>          mNetworkEventCoordinator;
    ::ll::TypedStorage<8, 208, std::optional<ScriptDiagnosticsPayload>> mDiagnosticsPayload;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk2405d5;
    ::ll::UntypedStorage<8, 216> mUnkb8ac67;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientDiagnosticsListener& operator=(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptClientDiagnosticsListener();
#else // @header-generator platform
    virtual ~ScriptClientDiagnosticsListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);
#else // @header-generator platform
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptClientDiagnosticsListener(::ServerNetworkEventCoordinator&);
#else // @header-generator platform
    MCNAPI explicit ScriptClientDiagnosticsListener(::ServerNetworkEventCoordinator& networkEventCoordinator);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerNetworkEventCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerNetworkEventCoordinator& networkEventCoordinator);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
