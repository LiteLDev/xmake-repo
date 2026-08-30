#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftRealmsAdmin { class ScriptRealmsAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptRealmsListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16>                               mScriptEventsHandle;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealmsAdmin
