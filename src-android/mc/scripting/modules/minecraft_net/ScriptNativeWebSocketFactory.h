#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventCoordinator;
class TaskGroup;
namespace Bedrock::Http { class HeaderCollection; }
namespace ScriptModuleMinecraftNet { class ScriptInternalWebSocketError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocket; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClient; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketConnectionFailedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketLimitExceededError; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNativeWebSocketFactory {
public:
    // ScriptNativeWebSocketFactory inner types declare
    // clang-format off
    struct PendingConnection;
    // clang-format on

    // ScriptNativeWebSocketFactory inner types define
    struct PendingConnection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80>            promise;
        ::ll::UntypedStorage<8, 32>            scriptSocket;
        ::ll::TypedStorage<8, 24, std::string> uri;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mEventCoordinator;
    ::ll::TypedStorage<8, 40, std::unordered_map<ScriptModuleMinecraftNet::ScriptNativeWebSocket*, ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory::PendingConnection>> mPendingConnections;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNativeWebSocketFactory& operator=(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory();
};

} // namespace ScriptModuleMinecraftNet
