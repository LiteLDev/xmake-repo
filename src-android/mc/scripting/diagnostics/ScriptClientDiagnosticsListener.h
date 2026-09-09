#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/diagnostics/ScriptDiagnosticsPayload.h"
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
    ::ll::TypedStorage<8, 8, ::ServerNetworkEventCoordinator&>          mNetworkEventCoordinator;
    ::ll::TypedStorage<8, 208, std::optional<ScriptDiagnosticsPayload>> mDiagnosticsPayload;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientDiagnosticsListener& operator=(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener(ScriptClientDiagnosticsListener const&);
    ScriptClientDiagnosticsListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientDiagnosticsListener();

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptClientDiagnosticsListener(::ServerNetworkEventCoordinator&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerNetworkEventCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
