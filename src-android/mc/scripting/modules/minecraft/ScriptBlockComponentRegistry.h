#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockComponentRegistry(::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
