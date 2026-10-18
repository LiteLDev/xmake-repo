#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/EntitySpawnReason.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace ScriptModuleMinecraft { class ScriptEntitySpawnCallbackArgs; }
namespace ScriptModuleMinecraft { class ScriptObstructionCallbackArgs; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpawnRulesRegistry {
public:
    // ScriptSpawnRulesRegistry inner types define
    using EntitySpawnCallback = ::Scripting::Closure<
#if defined(LL_PLAT_A) // @header-generator platform
        bool(Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)>;
#else // @header-generator platform
        bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)>;
#endif // @header-generator platform

    using ObstructionCallback = ::Scripting::Closure<
#if defined(LL_PLAT_A) // @header-generator platform
        bool(Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)>;
#else // @header-generator platform
        bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)>;
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptSpawnRulesRegistry(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&);
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
