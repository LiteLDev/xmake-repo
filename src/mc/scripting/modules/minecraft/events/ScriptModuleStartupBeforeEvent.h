#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ScriptModuleStartupEvent;
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomCommandRegistry; }
namespace ScriptModuleMinecraft { class ScriptDimensionRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptSpawnRulesRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptModuleStartupBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mBlockComponentRegistry;
    ::ll::UntypedStorage<8, 32> mItemComponentRegistry;
    ::ll::UntypedStorage<8, 32> mSpawnRulesRegistry;
    ::ll::UntypedStorage<8, 32> mCustomCommandRegistry;
    ::ll::UntypedStorage<8, 32> mDimensionRegistry;
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockComponentRegistry>>
            mBlockComponentRegistry;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponentRegistry>>
            mItemComponentRegistry;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSpawnRulesRegistry>>
        mSpawnRulesRegistry;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomCommandRegistry>>
            mCustomCommandRegistry;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionRegistry>>
        mDimensionRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptModuleStartupBeforeEvent& operator=(ScriptModuleStartupBeforeEvent const&);
#endif // @header-generator platform
    ScriptModuleStartupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptModuleStartupBeforeEvent(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
#else // @header-generator platform
    MCAPI ScriptModuleStartupBeforeEvent(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptModuleStartupBeforeEvent(::ScriptModuleStartupEvent const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ScriptModuleStartupBeforeEvent(
        ::ScriptModuleStartupEvent const&     eventData,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleStartupEvent const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleStartupEvent const& eventData, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
