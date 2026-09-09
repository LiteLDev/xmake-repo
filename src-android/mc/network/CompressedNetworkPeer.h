#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSettingOptions.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mSendBuffer;
    ::ll::TypedStorage<8, 24, std::string>             mReceiveBuffer;
    ::ll::TypedStorage<1, 1, bool>                     mCompressionEnabled;
    ::ll::TypedStorage<1, 1, bool>                     mHybridCompressionEnabled;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions> mNetworkSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CompressedNetworkPeer();

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);

    MCNAPI void setCompressionEnabled(::NetworkSettingOptions);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<NetworkPeer>);
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
