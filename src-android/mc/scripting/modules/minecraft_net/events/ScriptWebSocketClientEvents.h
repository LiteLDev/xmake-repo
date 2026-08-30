#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientCloseEventIntermediateData; }
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientReceiveEventIntermediateData; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClientEvents
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketClientEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientEvents();
};

} // namespace ScriptModuleMinecraftNet
