#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomDimensionRegistry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionNameError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionReloadNewDimensionError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDimensionRegistry(::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
