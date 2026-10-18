#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerAdmin { class ScriptCannotDeopPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptCannotKickPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptPlayerAlreadyOpError; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerIpPortOptions; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerNetherNetOptions; }
namespace Scripting { class DependencyLocator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
