#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/profile/LocalProfilerControlBroker.h"
#include "mc/profile/ProfilerControlAction.h"
#include "mc/profile/ProfilerControlTarget.h"
#include "mc/scripting/debugger/request_handlers/IScriptDebuggerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
namespace Bedrock::Profiling::Control { struct ProfilerControlArgs; }
namespace Bedrock::Profiling::Control { struct ProfilerControlResult; }
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
// clang-format on

class ScriptDebuggerBaseProfilerRequestHandler : public ::IScriptDebuggerRequestHandler {
public:
    // ScriptDebuggerBaseProfilerRequestHandler inner types declare
    // clang-format off
    struct PendingRequest;
    // clang-format on

    // ScriptDebuggerBaseProfilerRequestHandler inner types define
    struct PendingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mRequestSeq;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlTarget> mProfilerTarget;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ScriptDebuggerBaseProfilerRequestHandler::PendingRequest>> mPendingRequests;
    ::ll::UntypedStorage<8, 24> mProfilerControlBroker;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerBaseProfilerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerBaseProfilerRequestHandler();

    virtual void update(::ScriptDebugger&);

    virtual void onDisconnect(::ScriptDebugger&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _queueControlRequest(
        ::ScriptDebuggerMessages::DebuggerRequestMessage const&,
        ::ScriptDebugger&,
        ::Bedrock::Profiling::Control::ProfilerControlAction,
        ::Bedrock::Profiling::Control::ProfilerControlArgs
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(::ScriptDebugger&);

    MCNAPI void $onDisconnect(::ScriptDebugger&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
