#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class IScriptDedicatedServerUtils;
class Level;
namespace ScriptModuleServerAdmin { class ScriptAllowList; }
namespace ScriptModuleServerAdmin { class ScriptLevelStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptDedicatedServerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
    ::ll::TypedStorage<8, 8, ::Level&>                       mLevel;
    ::ll::UntypedStorage<8, 32>                              mAllowList;
    ::ll::UntypedStorage<8, 32>                              mLevelStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDedicatedServerManager& operator=(ScriptDedicatedServerManager const&);
    ScriptDedicatedServerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDedicatedServerManager(::Scripting::WeakLifetimeScope&, ::IScriptDedicatedServerUtils&, ::Level&);

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadCDNConfig();

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadPermissionsFile();

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadScriptConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope&, ::IScriptDedicatedServerUtils&, ::Level&);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
