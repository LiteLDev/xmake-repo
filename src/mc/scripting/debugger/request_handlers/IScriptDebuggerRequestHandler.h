#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

class IScriptDebuggerRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDebuggerRequestHandler() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerHandlers(::ScriptDebugger&) = 0;
#else // @header-generator platform
    virtual void registerHandlers(::ScriptDebugger& debugger) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(::ScriptDebugger&);
#else // @header-generator platform
    virtual void update(::ScriptDebugger& debugger);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDisconnect(::ScriptDebugger&);
#else // @header-generator platform
    virtual void onDisconnect(::ScriptDebugger& debugger);
#endif // @header-generator platform
    // NOLINTEND
};
