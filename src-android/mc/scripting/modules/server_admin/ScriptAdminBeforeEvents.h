#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleServerAdmin { class ScriptAdminBeforeEventsTickListener; }
namespace ScriptModuleServerAdmin { struct ScriptAsyncJoinEventSignal; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEvents
: public ::Scripting::WeakHandleFromThis<ScriptModuleServerAdmin::ScriptAdminBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 32> mAsyncJoinSignal;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleServerAdmin::ScriptAdminBeforeEventsTickListener>> mTickListener;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::Level*> mLevel;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAdminBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAdminBeforeEvents(::Level*, ::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&);

    MCNAPI void registerListeners();

    MCNAPI ~ScriptAdminBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level*, ::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
