#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftClient {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ScriptClientSignals {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraftClient
