#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleServerAdmin { class ScriptAdminBeforeEvents; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEventsTickListener : public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16>                               mBeforeEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAdminBeforeEventsTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAdminBeforeEventsTickListener();

    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
