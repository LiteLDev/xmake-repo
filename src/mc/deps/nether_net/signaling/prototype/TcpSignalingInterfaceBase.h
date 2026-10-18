#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/utils/EnableSharedFromThis.h"
#include "mc/external/sigslot/has_slots.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/external/sigslot/signal_with_thread_policy.h"
#else // @header-generator platform
#include "mc/external/sigslot/single_threaded.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace sigslot { class single_threaded; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class ReceivedIpPacket; }
#else // @header-generator platform
namespace NetherNet { struct NetworkID; }
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

class TcpSignalingInterfaceBase : public ::NetherNet::ContextProxy,
                                  public ::NetherNet::ISignalingInterface,
#if defined(LL_PLAT_A) // @header-generator platform
                                  public ::sigslot::has_slots<sigslot::single_threaded>,
                                  public ::NetherNet::EnableSharedFromThis<NetherNet::TcpSignalingInterfaceBase> {
#else // @header-generator platform
                                  public ::sigslot::has_slots<::sigslot::single_threaded>,
                                  public ::NetherNet::EnableSharedFromThis<::NetherNet::TcpSignalingInterfaceBase> {
#endif // @header-generator platform
public:
    // TcpSignalingInterfaceBase inner types declare
    // clang-format off
    class Peer;
    // clang-format on

    // TcpSignalingInterfaceBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class Peer : public ::sigslot::has_slots<sigslot::single_threaded> {
#else // @header-generator platform
    class Peer : public ::sigslot::has_slots<::sigslot::single_threaded> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 56>                                          SignalReceive;
        ::ll::UntypedStorage<8, 56>                                          SignalClose;
        ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                    mId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48> mUnk5f7cc6;
        ::ll::UntypedStorage<8, 48> mUnk8a97b1;
        ::ll::UntypedStorage<8, 24> mUnkde7d1e;
        ::ll::UntypedStorage<8, 8>  mUnkbe23e3;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Peer& operator=(Peer const&);
        Peer(Peer const&);
#endif // @header-generator platform
        Peer();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~Peer() = default;
#else // @header-generator platform
        virtual ~Peer() /*override*/ = default;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<NetherNet::TcpSignalingInterfaceBase::Peer>>> mPeers;
    ::ll::UntypedStorage<8, 88> mEventDispatcher;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnkc308bd;
    ::ll::UntypedStorage<8, 128> mUnkccca98;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TcpSignalingInterfaceBase& operator=(TcpSignalingInterfaceBase const&);
    TcpSignalingInterfaceBase(TcpSignalingInterfaceBase const&);
#endif // @header-generator platform
    TcpSignalingInterfaceBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TcpSignalingInterfaceBase() = default;
#else // @header-generator platform
    virtual ~TcpSignalingInterfaceBase() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);
#else // @header-generator platform
    virtual void SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID,
        ::std::string const&,
        ::std::function<void(::NetherNet::ESessionError)>&&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
