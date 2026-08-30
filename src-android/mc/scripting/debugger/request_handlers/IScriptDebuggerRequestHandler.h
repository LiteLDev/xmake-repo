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

    virtual void registerHandlers(::ScriptDebugger&) = 0;

    virtual void update(::ScriptDebugger&);

    virtual void onDisconnect(::ScriptDebugger&);
    // NOLINTEND
};
