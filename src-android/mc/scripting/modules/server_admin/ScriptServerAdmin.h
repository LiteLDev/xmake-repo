#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerAdmin { class ScriptCannotDeopPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptCannotKickPlayerError; }
namespace ScriptModuleServerAdmin { class ScriptPlayerAlreadyOpError; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerIpPortOptions; }
namespace ScriptModuleServerAdmin { struct ScriptTransferPlayerNetherNetOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
