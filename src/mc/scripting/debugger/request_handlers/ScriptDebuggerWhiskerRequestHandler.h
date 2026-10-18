#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/scripting/debugger/request_handlers/ScriptDebuggerBaseProfilerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptDebuggerWhiskerRequestHandler : public ::ScriptDebuggerBaseProfilerRequestHandler {
public:
    // prevent constructor by default
    ScriptDebuggerWhiskerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerWhiskerRequestHandler();
#else // @header-generator platform
    virtual void registerHandlers(::ScriptDebugger& debugger) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerHandlers(::ScriptDebugger&);

    virtual void onDisconnect(::ScriptDebugger&);
#else // @header-generator platform
    virtual void onDisconnect(::ScriptDebugger& debugger) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptDebuggerWhiskerRequestHandler(::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>);
#else // @header-generator platform
    MCNAPI explicit ScriptDebuggerWhiskerRequestHandler(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerHandlers(::ScriptDebugger&);
#else // @header-generator platform
    MCNAPI void $registerHandlers(::ScriptDebugger& debugger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDisconnect(::ScriptDebugger&);
#else // @header-generator platform
    MCNAPI void $onDisconnect(::ScriptDebugger& debugger);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
