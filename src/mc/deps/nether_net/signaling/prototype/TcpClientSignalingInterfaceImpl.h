#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/utils/ErrorOr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/external/sigslot/has_slots.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#include "mc/external/sigslot/single_threaded.h"
#endif // @header-generator platform

namespace NetherNet {

class TcpClientSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpClientSignalingInterfaceImpl inner types declare
    // clang-format off
    struct ClientHandshake;
    // clang-format on

    // TcpClientSignalingInterfaceImpl inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ClientHandshake : public ::sigslot::has_slots<sigslot::single_threaded> {
#else // @header-generator platform
    struct ClientHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeComplete;
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeFailed;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48> mUnk82dcf2;
        ::ll::UntypedStorage<8, 48> mUnkba5a34;
        ::ll::UntypedStorage<8, 8>  mUnk822afa;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SignInCallback = std::function<void(std::error_code)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        ClientHandshake& operator=(ClientHandshake const&);
        ClientHandshake(ClientHandshake const&);
        ClientHandshake();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mOnSignIn;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8bb762;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TcpClientSignalingInterfaceImpl& operator=(TcpClientSignalingInterfaceImpl const&);
    TcpClientSignalingInterfaceImpl(TcpClientSignalingInterfaceImpl const&);
#endif // @header-generator platform
    TcpClientSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TcpClientSignalingInterfaceImpl() = default;
#else // @header-generator platform
    virtual ~TcpClientSignalingInterfaceImpl() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
