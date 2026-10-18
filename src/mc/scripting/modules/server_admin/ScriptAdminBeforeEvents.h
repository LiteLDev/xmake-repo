#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptAdminBeforeEventsTickListener; }
namespace ScriptModuleServerAdmin { struct ScriptAsyncJoinEventSignal; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEvents
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleServerAdmin::ScriptAdminBeforeEvents> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleServerAdmin::ScriptAdminBeforeEvents> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 32> mAsyncJoinSignal;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleServerAdmin::ScriptAdminBeforeEventsTickListener>> mTickListener;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::Level*> mLevel;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk4ee031;
    ::ll::UntypedStorage<8, 8>  mUnk19f05e;
    ::ll::UntypedStorage<8, 16> mUnkb0de83;
    ::ll::UntypedStorage<8, 8>  mUnkff7816;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAdminBeforeEvents& operator=(ScriptAdminBeforeEvents const&);
    ScriptAdminBeforeEvents(ScriptAdminBeforeEvents const&);
#endif // @header-generator platform
    ScriptAdminBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptAdminBeforeEvents(::Level*, ::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCNAPI ScriptAdminBeforeEvents(
        ::Level*                        level,
        ::Scripting::WeakLifetimeScope& scope,
        ::Scripting::DependencyLocator& locator
    );
#endif // @header-generator platform

    MCNAPI void registerListeners();

    MCNAPI ~ScriptAdminBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Level*, ::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Level* level, ::Scripting::WeakLifetimeScope& scope, ::Scripting::DependencyLocator& locator);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
