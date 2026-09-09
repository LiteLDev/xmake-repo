#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocket; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClientEvents; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketNotConnectedError; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClient : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptWebSocketClient> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocket>> mSocket;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                   mScope;
    ::ll::UntypedStorage<8, 32>                                                                 mEvents;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mConfigMaxOutgoingBodyBytes;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mConfigMaxIncomingPayloadSizeBytes;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClient();
};

} // namespace ScriptModuleMinecraftNet
