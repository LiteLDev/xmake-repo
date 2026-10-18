#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/http/StatusCode.h"
#endif // @header-generator platform
#include "mc/deps/core/http/WebSocket.h"

namespace ScriptModuleMinecraftNet {

class ScriptNativeWebSocket : public ::Bedrock::Http::WebSocket {
public:
    // ScriptNativeWebSocket inner types define
    enum class ConnectionState : int {
        Connecting = 0,
        Open       = 1,
        Closed     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mLock;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                          mPayloads;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                                  mCloseSignaled;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptNativeWebSocket::ConnectionState> mConnectionState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkd25108;
    ::ll::UntypedStorage<8, 24> mUnkc5aca1;
    ::ll::UntypedStorage<1, 1>  mUnkc75957;
    ::ll::UntypedStorage<4, 4>  mUnkc3a64c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptNativeWebSocket& operator=(ScriptNativeWebSocket const&);
    ScriptNativeWebSocket(ScriptNativeWebSocket const&);
    ScriptNativeWebSocket();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptNativeWebSocket() = default;
#else // @header-generator platform
    virtual ~ScriptNativeWebSocket() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMessage(std::string_view);
#else // @header-generator platform
    virtual void onMessage(::std::string_view message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onClose(uint);
#else // @header-generator platform
    virtual void onClose(uint) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onMessage(::std::string_view message);

    MCNAPI void $onClose(uint);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
