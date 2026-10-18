#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManagerResult;
// clang-format on

class IScriptTelemetryLogger {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IScriptTelemetryLogger();
#else // @header-generator platform
    virtual ~IScriptTelemetryLogger() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPluginRun(::ScriptPluginManagerResult const&);
#else // @header-generator platform
    virtual void onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDebuggerListen(bool);
#else // @header-generator platform
    virtual void onDebuggerListen(bool autoAttach);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDebuggerConnect(bool, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onDebuggerConnect(bool autoAttach, int retries);
#endif // @header-generator platform
    // NOLINTEND
};
