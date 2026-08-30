#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/chunk/EntityType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptAABB; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::br::spawn::EntityType> mEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnType();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
