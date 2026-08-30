#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/signal_with_thread_policy.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ContextProxy; }
namespace NetherNet { struct NetworkID; }
namespace sigslot { class single_threaded; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class SocketFactory; }
// clang-format on

namespace NetherNet {

class TcpClientSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpClientSignalingInterfaceImpl inner types declare
    // clang-format off
    struct ClientHandshake;
    // clang-format on

    // TcpClientSignalingInterfaceImpl inner types define
    struct ClientHandshake : public ::sigslot::has_slots<sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeComplete;
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeFailed;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
        // NOLINTEND
    };

    using SignInCallback = std::function<void(std::error_code)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mOnSignIn;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpClientSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpClientSignalingInterfaceImpl() = default;
    // NOLINTEND
};

} // namespace NetherNet
