#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
struct NetherNetConnector;
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { struct SessionState; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WebRTCNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                             mNetherNetConnector;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const> mPeerId;
    ::ll::TypedStorage<8, 8, ulong const>                   mSessionId;
    ::ll::TypedStorage<1, 1, bool const>                    mIsLan;
    ::ll::UntypedStorage<8, 72>                             mNetherNetNetworkStatus;
    ::ll::TypedStorage<4, 4, uint>                          mNumNetworkStatusUpdates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector> const> mNetherNetConnector;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const>                              mPeerId;
    ::ll::TypedStorage<8, 8, uint64 const>                                               mSessionId;
    ::ll::TypedStorage<1, 1, bool const>                                                 mIsLan;
    ::ll::TypedStorage<8, 72, ::NetworkPeer::NetworkStatus>                              mNetherNetNetworkStatus;
    ::ll::TypedStorage<4, 4, uint>                                                       mNumNetworkStatusUpdates;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    WebRTCNetworkPeer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WebRTCNetworkPeer();
#else // @header-generator platform
    virtual ~WebRTCNetworkPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void
    sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
#else // @header-generator platform
    virtual void update() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLocal() const;
#else // @header-generator platform
    virtual bool isLocal() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEncrypted() const;
#else // @header-generator platform
    virtual bool isEncrypted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLan() const;
#else // @header-generator platform
    virtual bool isLan() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    WebRTCNetworkPeer(::Bedrock::NonOwnerPointer<NetherNetConnector>&&, ::NetherNet::NetworkID const&, ulong, bool);

    MCNAPI ::NetherNet::NetworkID const& getPeerId() const;

    MCNAPI ulong getSessionId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<NetherNetConnector>&&, ::NetherNet::NetworkID const&, ulong, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);
#endif // @header-generator platform

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI void $update();

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI bool $isLan() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
