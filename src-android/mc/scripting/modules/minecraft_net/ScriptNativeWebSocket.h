#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mLock;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                          mPayloads;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                                  mCloseSignaled;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptNativeWebSocket::ConnectionState> mConnectionState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptNativeWebSocket() = default;

    virtual void onMessage(std::string_view);

    virtual void onClose(uint);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
