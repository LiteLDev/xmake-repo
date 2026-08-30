#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/signal_with_thread_policy.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ContextProxy; }
namespace NetherNet { struct NetworkID; }
namespace sigslot { class single_threaded; }
namespace webrtc { class AsyncListenSocket; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SocketFactory; }
// clang-format on

namespace NetherNet {

class TcpServerSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpServerSignalingInterfaceImpl inner types declare
    // clang-format off
    class ServerHandshake;
    // clang-format on

    // TcpServerSignalingInterfaceImpl inner types define
    class ServerHandshake : public ::sigslot::has_slots<sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeComplete;
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeFailed;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerHandshake();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncListenSocket>> mListenSocket;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpServerSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpServerSignalingInterfaceImpl() = default;
    // NOLINTEND
};

} // namespace NetherNet
