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
    ::ll::UntypedStorage<8, 32> mBlockComponentRegistry;
    ::ll::UntypedStorage<8, 32> mItemComponentRegistry;
    ::ll::UntypedStorage<8, 32> mSpawnRulesRegistry;
    ::ll::UntypedStorage<8, 32> mCustomCommandRegistry;
    ::ll::UntypedStorage<8, 32> mDimensionRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModuleStartupBeforeEvent(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);

    MCNAPI ScriptModuleStartupBeforeEvent(::ScriptModuleStartupEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);

    MCNAPI void* $ctor(::ScriptModuleStartupEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
