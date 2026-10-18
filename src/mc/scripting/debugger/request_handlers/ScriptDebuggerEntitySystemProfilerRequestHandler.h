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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerEntitySystemProfilerRequestHandler();
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
    MCNAPI explicit ScriptDebuggerEntitySystemProfilerRequestHandler(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>
#else // @header-generator platform
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<uint>>
           _parseIdsFromRequest(::ScriptDebuggerMessages::DebuggerRequestMessage const&, std::string const);
#else // @header-generator platform
    MCNAPI ::std::optional<::std::vector<uint>>
    _parseIdsFromRequest(::ScriptDebuggerMessages::DebuggerRequestMessage const& request, ::std::string const argName);
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
