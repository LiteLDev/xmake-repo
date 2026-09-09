#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomDimensionRegistry; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionNameError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionReloadNewDimensionError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionRegistry& operator=(ScriptDimensionRegistry const&);
    ScriptDimensionRegistry(ScriptDimensionRegistry const&);
    ScriptDimensionRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDimensionRegistry(::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
