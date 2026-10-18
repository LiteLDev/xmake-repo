#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class IPAddress; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { class PacketSocketFactory; }
#else // @header-generator platform
#endif // @header-generator platform
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SocketCache {
public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<webrtc::PacketSocketFactory*> const> mSocketFactory;
    ::ll::UntypedStorage<8, 48>                                                   mSockets;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk3c893a;
    ::ll::UntypedStorage<8, 48> mUnkd48f54;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SocketCache& operator=(SocketCache const&);
    SocketCache(SocketCache const&);
#endif // @header-generator platform
    SocketCache();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    createGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort minPort, ushort maxPort);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
