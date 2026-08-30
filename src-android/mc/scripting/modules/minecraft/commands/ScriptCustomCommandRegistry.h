#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/ClosureGeneric.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class CustomCommandRegistry; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::CustomCommandRegistry&> mCustomCommandRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandRegistry& operator=(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCustomCommandRegistry(::ScriptModuleMinecraft::CustomCommandRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::CustomCommandRegistry&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
