#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
class ServerLevel;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomSpawnRulesRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // ScriptCustomSpawnRulesRegistry inner types define
    using EntityPredicate = std::function<
        bool(const br::spawn::EntityType&, BlockSource&, br::spawn::EntitySpawnReason&, BlockPos, IRandom&)>;

    using ObstructionPredicate = std::function<bool(BlockSource&, const Mob&, const br::spawn::EntityType&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomSpawnRulesRegistry& operator=(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCustomSpawnRulesRegistry();

    virtual void _onReload();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomSpawnRulesRegistry(::ServerScriptManagerEvents&, ::ServerLevel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::ServerLevel&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onReload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
