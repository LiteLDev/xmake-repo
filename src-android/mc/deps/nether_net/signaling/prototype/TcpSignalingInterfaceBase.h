#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#include "mc/deps/nether_net/utils/EnableSharedFromThis.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/signal_with_thread_policy.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace sigslot { class single_threaded; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class ReceivedIpPacket; }
// clang-format on

namespace NetherNet {

class TcpSignalingInterfaceBase : public ::NetherNet::ContextProxy,
                                  public ::NetherNet::ISignalingInterface,
                                  public ::sigslot::has_slots<sigslot::single_threaded>,
                                  public ::NetherNet::EnableSharedFromThis<NetherNet::TcpSignalingInterfaceBase> {
public:
    // TcpSignalingInterfaceBase inner types declare
    // clang-format off
    class Peer;
    // clang-format on

    // TcpSignalingInterfaceBase inner types define
    class Peer : public ::sigslot::has_slots<sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 56>                                          SignalReceive;
        ::ll::UntypedStorage<8, 56>                                          SignalClose;
        ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                    mId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
        // NOLINTEND

    public:
        // prevent constructor by default
        Peer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Peer() = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<NetherNet::TcpSignalingInterfaceBase::Peer>>> mPeers;
    ::ll::UntypedStorage<8, 88> mEventDispatcher;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpSignalingInterfaceBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TcpSignalingInterfaceBase() = default;

    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // clang-format on
    // NOLINTEND
};

} // namespace NetherNet
