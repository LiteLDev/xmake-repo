#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { struct InvalidArgumentError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomSpawnRulesRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // ScriptCustomSpawnRulesRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using EntityPredicate = std::function<
        bool(const br::spawn::EntityType&, BlockSource&, br::spawn::EntitySpawnReason&, BlockPos, IRandom&)>;
#else // @header-generator platform
    using EntityPredicate = ::std::function<
        bool(::br::spawn::EntityType const&, ::BlockSource&, ::br::spawn::EntitySpawnReason&, ::BlockPos, ::IRandom&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ObstructionPredicate = std::function<bool(BlockSource&, const Mob&, const br::spawn::EntityType&)>;
#else // @header-generator platform
    using ObstructionPredicate = ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)>;
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _onReload() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onReload();
#else // @header-generator platform
    MCAPI void $_onReload();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
