#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 80>            promise;
        ::ll::UntypedStorage<8, 32>            scriptSocket;
        ::ll::TypedStorage<8, 24, std::string> uri;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 80> mUnka62f13;
        ::ll::UntypedStorage<8, 32> mUnkb15dd5;
        ::ll::UntypedStorage<8, 32> mUnk1195c7;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        PendingConnection& operator=(PendingConnection const&);
        PendingConnection(PendingConnection const&);
        PendingConnection();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mEventCoordinator;
    ::ll::TypedStorage<8, 40, std::unordered_map<ScriptModuleMinecraftNet::ScriptNativeWebSocket*, ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory::PendingConnection>> mPendingConnections;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkf343ea;
    ::ll::UntypedStorage<8, 64> mUnk9afc93;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNativeWebSocketFactory& operator=(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory(ScriptNativeWebSocketFactory const&);
    ScriptNativeWebSocketFactory();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptNativeWebSocketFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
