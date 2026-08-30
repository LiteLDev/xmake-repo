#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class IPAddress; }
namespace webrtc { class PacketSocketFactory; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SocketCache {
public:
    // SocketCache inner types define
    using IpToPortsMap = ::brstd::flat_map<
        webrtc::IPAddress,
        brstd::flat_map<
            ushort,
            std::weak_ptr<webrtc::AsyncPacketSocket>,
            std::less<ushort>,
            std::vector<ushort>,
            std::vector<std::weak_ptr<webrtc::AsyncPacketSocket>>>,
        std::less<webrtc::IPAddress>,
        std::vector<webrtc::IPAddress>,
        std::vector<brstd::flat_map<
            ushort,
            std::weak_ptr<webrtc::AsyncPacketSocket>,
            std::less<ushort>,
            std::vector<ushort>,
            std::vector<std::weak_ptr<webrtc::AsyncPacketSocket>>>>>;

    using PortToSocketMap = ::brstd::flat_map<
        ushort,
        std::weak_ptr<webrtc::AsyncPacketSocket>,
        std::less<ushort>,
        std::vector<ushort>,
        std::vector<std::weak_ptr<webrtc::AsyncPacketSocket>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<webrtc::PacketSocketFactory*> const> mSocketFactory;
    ::ll::UntypedStorage<8, 48>                                                   mSockets;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SocketCache(::webrtc::PacketSocketFactory*);

    MCNAPI std::shared_ptr<webrtc::AsyncPacketSocket>
           createGlobalUdpSocket(::webrtc::SocketAddress const&, ushort, ushort);

    MCNAPI ~SocketCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PacketSocketFactory*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
