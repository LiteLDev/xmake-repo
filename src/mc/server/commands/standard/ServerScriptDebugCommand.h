#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class IScriptDebugger;
class ScriptDiagnosticsPublishToFile;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptSettings;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4>             mMode;
    ::ll::UntypedStorage<4, 4>             mDebuggerAction;
    ::ll::UntypedStorage<4, 4>             mProfilerAction;
    ::ll::UntypedStorage<4, 4>             mDiagnosticsAction;
    ::ll::TypedStorage<8, 24, std::string> mDebuggerHost;
    ::ll::TypedStorage<4, 4, int>          mDebuggerPort;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::Mode>              mMode;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::DebuggerAction>    mDebuggerAction;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::ProfilerAction>    mProfilerAction;
    ::ll::TypedStorage<4, 4, ::ScriptDebugCommand::DiagnosticsAction> mDiagnosticsAction;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDebuggerHost;
    ::ll::TypedStorage<4, 4, int>                                     mDebuggerPort;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerScriptDebugCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    setup(::CommandRegistry&, ::IScriptDebugger*, ::ScriptDiagnosticsPublishToFile*, ::ScriptSettings const&);
#else // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptDiagnosticsPublishToFile*& sDiagnosticsPublishToFile();
#else // @header-generator platform
    MCAPI static ::ScriptDiagnosticsPublishToFile*& sDiagnosticsPublishToFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<ushort>& sForcedPort();
#else // @header-generator platform
    MCAPI static ::std::optional<ushort>& sForcedPort();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::IScriptDebugger*& sServerScriptDebugger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::IScriptDebugger*& sServerScriptDebugger();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
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
