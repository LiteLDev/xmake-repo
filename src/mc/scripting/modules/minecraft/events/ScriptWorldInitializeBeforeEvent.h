#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ScriptingWorldInitializeEvent;
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mBlockComponentRegistry;
    ::ll::UntypedStorage<8, 32> mItemComponentRegistry;
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockComponentRegistry>>
            mBlockComponentRegistry;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponentRegistry>>
            mItemComponentRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ScriptWorldInitializeBeforeEvent(::ScriptingWorldInitializeEvent const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ScriptWorldInitializeBeforeEvent(
        ::ScriptingWorldInitializeEvent const& eventData,
        ::Scripting::WeakLifetimeScope const&  scope
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptingWorldInitializeEvent const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptingWorldInitializeEvent const& eventData, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
