#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptTelemetryLogger.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ScriptPluginManagerResult;
// clang-format on

class MinecraftScriptTelemetryLogger : public ::IScriptTelemetryLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mIsClientside;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScriptTelemetryLogger();

    virtual void onPluginDiscovery(::ScriptPluginManagerResult const&);

    virtual void onPluginRun(::ScriptPluginManagerResult const&);

    virtual void onDebuggerListen(bool);

    virtual void onDebuggerConnect(bool, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftScriptTelemetryLogger(::IMinecraftEventing&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPluginDiscovery(::ScriptPluginManagerResult const&);

    MCNAPI void $onPluginRun(::ScriptPluginManagerResult const&);

    MCNAPI void $onDebuggerListen(bool);

    MCNAPI void $onDebuggerConnect(bool, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
