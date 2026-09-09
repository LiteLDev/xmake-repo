#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class IScriptDebugger;
class ScriptDiagnosticsPublishToFile;
// clang-format on

class ScriptDebugCommand : public ::Command {
public:
    // ScriptDebugCommand inner types define
    enum class DebuggerAction : int {
        Listen  = 0,
        Connect = 1,
        Close   = 2,
    };

    enum class ProfilerAction : int {
        Start = 0,
        Stop  = 1,
    };

    enum class DiagnosticsAction : int {
        StartCapture = 0,
        StopCapture  = 1,
    };

    enum class Mode : int {
        Unknown     = 0,
        Debugger    = 1,
        Profiler    = 2,
        Diagnostics = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugCommand();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebugCommand();

    MCNAPI void _handleDebuggerAttach(
        ::IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::DebuggerAction,
        std::string const&,
        ushort,
        ::CommandOutput&
    ) const;

    MCNAPI void _handleDiagnosticsAction(
        ::ScriptDiagnosticsPublishToFile*,
        std::string const&,
        ::ScriptDebugCommand::DiagnosticsAction,
        ::CommandOutput&
    ) const;

    MCNAPI void _handleProfilerAction(
        ::IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::ProfilerAction,
        ::CommandOutput&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
