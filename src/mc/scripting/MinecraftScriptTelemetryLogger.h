#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptTelemetryLogger.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IMinecraftEventing;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptPluginManagerResult;
// clang-format on

class MinecraftScriptTelemetryLogger : public ::IScriptTelemetryLogger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mIsClientside;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk2304b6;
    ::ll::UntypedStorage<8, 8> mUnk44caa9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftScriptTelemetryLogger();
#else // @header-generator platform
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    virtual void onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPluginRun(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    virtual void onDebuggerListen(bool autoAttach) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void onDebuggerConnect(bool autoAttach, int retries) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPluginDiscovery(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    MCNAPI void $onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPluginRun(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    MCNAPI void $onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDebuggerListen(bool);
#else // @header-generator platform
    MCNAPI void $onDebuggerListen(bool autoAttach);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDebuggerConnect(bool, int);
#else // @header-generator platform
    MCNAPI void $onDebuggerConnect(bool autoAttach, int retries);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
