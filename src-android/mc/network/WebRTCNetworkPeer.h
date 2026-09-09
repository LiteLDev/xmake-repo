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
namespace NetherNet { struct SessionState; }
// clang-format on

class WebRTCNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                             mNetherNetConnector;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const> mPeerId;
    ::ll::TypedStorage<8, 8, ulong const>                   mSessionId;
    ::ll::TypedStorage<1, 1, bool const>                    mIsLan;
    ::ll::UntypedStorage<8, 72>                             mNetherNetNetworkStatus;
    ::ll::TypedStorage<4, 4, uint>                          mNumNetworkStatusUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    WebRTCNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WebRTCNetworkPeer();

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual void update();

    virtual bool isLocal() const;

    virtual bool isEncrypted() const;

    virtual bool isLan() const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI void $update();

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI bool $isLan() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
