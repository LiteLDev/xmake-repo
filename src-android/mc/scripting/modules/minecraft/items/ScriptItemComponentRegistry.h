#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentWriter; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponentRegistry
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptItemComponentRegistry> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentWriter&> mCustomComponentWriter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponentRegistry& operator=(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemComponentRegistry(::ScriptModuleMinecraft::IScriptItemCustomComponentWriter&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::IScriptItemCustomComponentWriter&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
