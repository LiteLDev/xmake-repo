#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
namespace ScriptModuleMinecraftClient { struct ScriptClientMessage; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftClient {

class ScriptClientSignals {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 32>                               mMessageSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientSignals();
};

} // namespace ScriptModuleMinecraftClient
