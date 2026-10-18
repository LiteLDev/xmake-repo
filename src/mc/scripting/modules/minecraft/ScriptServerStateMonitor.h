#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/scripting/modules/minecraft/ScriptServerState.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerStateMonitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptServerState> mState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPreReloadSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mInitializeCompleteSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mStartupCompleteSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerStateMonitor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerStateMonitor();

    virtual void _onReload();

    virtual void _onScriptInitializationComplete();

    virtual void _onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptServerStateMonitor(::ServerScriptManagerEvents&);

    MCNAPI bool isReloading() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptServerState const& state() const;
#else // @header-generator platform
    MCAPI explicit ScriptServerStateMonitor(::ServerScriptManagerEvents& events);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
#else // @header-generator platform
    MCAPI void* $ctor(::ServerScriptManagerEvents& events);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onReload();
#else // @header-generator platform
    MCFOLD void $_onReload();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onScriptInitializationComplete();
#else // @header-generator platform
    MCFOLD void $_onScriptInitializationComplete();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onScriptModuleStartupComplete();
#else // @header-generator platform
    MCFOLD void $_onScriptModuleStartupComplete();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
