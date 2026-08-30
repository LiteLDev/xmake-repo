#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
class LocalConnector;
// clang-format on

class LocalNetworkPeer : public ::NetworkPeer {
public:
    // LocalNetworkPeer inner types declare
    // clang-format off
    struct IncomingData;
    // clang-format on

    // LocalNetworkPeer inner types define
    struct IncomingData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mData;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingData& operator=(IncomingData const&);
        IncomingData(IncomingData const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalConnector>>                                  mConnector;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalNetworkPeer>>                                mOtherPeer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SPSCQueue<LocalNetworkPeer::IncomingData, 512>>> mIncomingData;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LocalNetworkPeer();

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual bool isLocal() const;

    virtual bool isEncrypted() const;

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LocalNetworkPeer(::LocalConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LocalConnector&);
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

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

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
