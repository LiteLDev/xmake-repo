#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptEntitySpawnType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptObstructionCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mEntitySpawnType;
    ::ll::UntypedStorage<8, 32> mEntity;
    ::ll::UntypedStorage<8, 32> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObstructionCallbackArgs();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
