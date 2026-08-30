#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace ScriptModuleMinecraft { class ScriptEntitySpawnCallbackArgs; }
namespace ScriptModuleMinecraft { class ScriptObstructionCallbackArgs; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpawnRulesRegistry {
public:
    // ScriptSpawnRulesRegistry inner types define
    using EntitySpawnCallback = ::Scripting::Closure<
        bool(Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)>;

    using ObstructionCallback = ::Scripting::Closure<
        bool(Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnRulesRegistry& operator=(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptSpawnRulesRegistry(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
