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

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ProfilerAction : int {
        Start = 0,
        Stop  = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugCommand();
    // NOLINTEND
#else // @header-generator platform
    enum class ProfilerAction : int {
        Start = 0,
        Stop  = 1,
    };
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptDebugCommand();

    MCNAPI void _handleDebuggerAttach(
        ::IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::DebuggerAction,
        std::string const&,
        ushort,
        ::CommandOutput&
#else // @header-generator platform
    MCAPI void _handleDebuggerAttach(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::DebuggerAction action,
        ::std::string const&                 host,
        ushort                               port,
        ::CommandOutput&                     output
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleDiagnosticsAction(
        ::ScriptDiagnosticsPublishToFile*,
        std::string const&,
        ::ScriptDebugCommand::DiagnosticsAction,
        ::CommandOutput&
#else // @header-generator platform
    MCAPI void _handleDiagnosticsAction(
        ::ScriptDiagnosticsPublishToFile*       diagnosticsPublishToFile,
        ::std::string const&                    locPrefix,
        ::ScriptDebugCommand::DiagnosticsAction action,
        ::CommandOutput&                        output
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleProfilerAction(
        ::IScriptDebugger*,
        std::string const&,
        ::ScriptDebugCommand::ProfilerAction,
        ::CommandOutput&
#else // @header-generator platform
    MCAPI void _handleProfilerAction(
        ::IScriptDebugger*                   debugger,
        ::std::string const&                 locPrefix,
        ::ScriptDebugCommand::ProfilerAction action,
        ::CommandOutput&                     output
#endif // @header-generator platform
    ) const;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
