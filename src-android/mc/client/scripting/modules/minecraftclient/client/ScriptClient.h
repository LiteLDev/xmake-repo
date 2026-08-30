#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace ScriptModuleMinecraftClient { class ScriptClientListeners; }
namespace ScriptModuleMinecraftClient { class ScriptClientSignals; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftClient {

class ScriptClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IClientInstance*>>                                   mClientInstance;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                     mScope;
    ::ll::UntypedStorage<8, 32>                                                                   mSignalsHandle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftClient::ScriptClientListeners>> mListeners;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClient& operator=(ScriptClient const&);
    ScriptClient(ScriptClient const&);
    ScriptClient();
};

} // namespace ScriptModuleMinecraftClient
