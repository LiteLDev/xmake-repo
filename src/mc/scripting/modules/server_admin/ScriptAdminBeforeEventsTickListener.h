#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptAdminBeforeEvents; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEventsTickListener : public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16>                               mBeforeEvents;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk6c6f3c;
    ::ll::UntypedStorage<8, 16> mUnk742e8a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAdminBeforeEventsTickListener& operator=(ScriptAdminBeforeEventsTickListener const&);
    ScriptAdminBeforeEventsTickListener(ScriptAdminBeforeEventsTickListener const&);
#endif // @header-generator platform
    ScriptAdminBeforeEventsTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptAdminBeforeEventsTickListener();

    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace ScriptModuleServerAdmin
