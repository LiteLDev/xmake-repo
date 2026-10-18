#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/profile/LocalProfilerControlBroker.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/profile/ProfilerControlAction.h"
#include "mc/profile/ProfilerControlTarget.h"
#include "mc/scripting/debugger/request_handlers/IScriptDebuggerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
namespace Bedrock::Profiling::Control { struct ProfilerControlArgs; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Profiling::Control { struct ProfilerControlResult; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int> mRequestSeq;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkd2679f;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        PendingRequest& operator=(PendingRequest const&);
        PendingRequest(PendingRequest const&);
        PendingRequest();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlTarget> mProfilerTarget;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ScriptDebuggerBaseProfilerRequestHandler::PendingRequest>> mPendingRequests;
    ::ll::UntypedStorage<8, 24> mProfilerControlBroker;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnka39c38;
    ::ll::UntypedStorage<8, 64> mUnk69b6ba;
    ::ll::UntypedStorage<8, 24> mUnkc1e6d7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptDebuggerBaseProfilerRequestHandler& operator=(ScriptDebuggerBaseProfilerRequestHandler const&);
    ScriptDebuggerBaseProfilerRequestHandler(ScriptDebuggerBaseProfilerRequestHandler const&);
#endif // @header-generator platform
    ScriptDebuggerBaseProfilerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerBaseProfilerRequestHandler();
#else // @header-generator platform
    virtual void update(::ScriptDebugger& debugger) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(::ScriptDebugger&);

    virtual void onDisconnect(::ScriptDebugger&);
#else // @header-generator platform
    virtual void onDisconnect(::ScriptDebugger& debugger) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ScriptDebuggerBaseProfilerRequestHandler(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker,
        ::Bedrock::Profiling::Control::ProfilerControlTarget     profilerTarget
    );

#endif // @header-generator platform
    MCNAPI void _queueControlRequest(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ScriptDebuggerMessages::DebuggerRequestMessage const&,
        ::ScriptDebugger&,
        ::Bedrock::Profiling::Control::ProfilerControlAction,
        ::Bedrock::Profiling::Control::ProfilerControlArgs
#else // @header-generator platform
        ::ScriptDebuggerMessages::DebuggerRequestMessage const& request,
        ::ScriptDebugger&                                       debugger,
        ::Bedrock::Profiling::Control::ProfilerControlAction    action,
        ::Bedrock::Profiling::Control::ProfilerControlArgs      args
#endif // @header-generator platform
    );
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker,
        ::Bedrock::Profiling::Control::ProfilerControlTarget     profilerTarget
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(::ScriptDebugger&);
#else // @header-generator platform
    MCNAPI void $update(::ScriptDebugger& debugger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDisconnect(::ScriptDebugger&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $onDisconnect(::ScriptDebugger& debugger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
