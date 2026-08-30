#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptEntitySpawnType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                 mEntitySpawnType;
    ::ll::TypedStorage<2, 2, ::br::spawn::EntitySpawnReason>                    mEntitySpawnReason;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptDimensionLocation> mDimensionLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnCallbackArgs();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
