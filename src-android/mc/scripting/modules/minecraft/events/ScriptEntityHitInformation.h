#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mActor;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
