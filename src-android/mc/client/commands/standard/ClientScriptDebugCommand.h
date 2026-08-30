#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class IScriptDebugger;
// clang-format on

class ClientScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>             mMode;
    ::ll::UntypedStorage<4, 4>             mDebuggerAction;
    ::ll::UntypedStorage<4, 4>             mProfilerAction;
    ::ll::TypedStorage<8, 24, std::string> mDebuggerHost;
    ::ll::TypedStorage<4, 4, int>          mDebuggerPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::IScriptDebugger*& sClientScriptDebugger();
    // NOLINTEND
};
