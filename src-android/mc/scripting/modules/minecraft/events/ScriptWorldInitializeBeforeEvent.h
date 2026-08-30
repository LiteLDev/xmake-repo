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
    ::ll::UntypedStorage<8, 32> mBlockComponentRegistry;
    ::ll::UntypedStorage<8, 32> mItemComponentRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptWorldInitializeBeforeEvent(::ScriptingWorldInitializeEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptingWorldInitializeEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
