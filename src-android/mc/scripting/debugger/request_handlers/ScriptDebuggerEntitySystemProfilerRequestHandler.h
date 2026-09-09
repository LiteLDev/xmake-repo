#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/scripting/debugger/request_handlers/ScriptDebuggerBaseProfilerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
// clang-format on

class ScriptDebuggerEntitySystemProfilerRequestHandler : public ::ScriptDebuggerBaseProfilerRequestHandler {
public:
    // prevent constructor by default
    ScriptDebuggerEntitySystemProfilerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerEntitySystemProfilerRequestHandler();

    virtual void registerHandlers(::ScriptDebugger&);

    virtual void onDisconnect(::ScriptDebugger&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDebuggerEntitySystemProfilerRequestHandler(
        ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>
    );

    MCNAPI std::optional<std::vector<uint>>
           _parseIdsFromRequest(::ScriptDebuggerMessages::DebuggerRequestMessage const&, std::string const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerHandlers(::ScriptDebugger&);

    MCNAPI void $onDisconnect(::ScriptDebugger&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
