#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/external/sigslot/has_slots.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#include "mc/external/sigslot/single_threaded.h"
#endif // @header-generator platform

namespace NetherNet {

class TcpServerSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpServerSignalingInterfaceImpl inner types declare
    // clang-format off
    class ServerHandshake;
    // clang-format on

    // TcpServerSignalingInterfaceImpl inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class ServerHandshake : public ::sigslot::has_slots<sigslot::single_threaded> {
#else // @header-generator platform
    class ServerHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeComplete;
        ::ll::UntypedStorage<8, 56>                                          SignalHandshakeFailed;
        ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncPacketSocket>> mSocket;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48> mUnkc52f00;
        ::ll::UntypedStorage<8, 48> mUnk5a4a4e;
        ::ll::UntypedStorage<8, 8>  mUnka748dc;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ServerHandshake& operator=(ServerHandshake const&);
        ServerHandshake(ServerHandshake const&);
#endif // @header-generator platform
        ServerHandshake();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::AsyncListenSocket>> mListenSocket;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkef4438;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TcpServerSignalingInterfaceImpl& operator=(TcpServerSignalingInterfaceImpl const&);
    TcpServerSignalingInterfaceImpl(TcpServerSignalingInterfaceImpl const&);
#endif // @header-generator platform
    TcpServerSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TcpServerSignalingInterfaceImpl() = default;
#else // @header-generator platform
    virtual ~TcpServerSignalingInterfaceImpl() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
