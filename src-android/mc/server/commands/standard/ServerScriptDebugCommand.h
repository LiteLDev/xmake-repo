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
class ScriptDiagnosticsPublishToFile;
struct ScriptSettings;
// clang-format on

class ServerScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>             mMode;
    ::ll::UntypedStorage<4, 4>             mDebuggerAction;
    ::ll::UntypedStorage<4, 4>             mProfilerAction;
    ::ll::UntypedStorage<4, 4>             mDiagnosticsAction;
    ::ll::TypedStorage<8, 24, std::string> mDebuggerHost;
    ::ll::TypedStorage<4, 4, int>          mDebuggerPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerScriptDebugCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    setup(::CommandRegistry&, ::IScriptDebugger*, ::ScriptDiagnosticsPublishToFile*, ::ScriptSettings const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptDiagnosticsPublishToFile*& sDiagnosticsPublishToFile();

    MCNAPI static std::optional<ushort>& sForcedPort();

    MCNAPI static ::IScriptDebugger*& sServerScriptDebugger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
