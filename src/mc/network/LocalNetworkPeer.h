#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/SPSCQueue.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mData;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk1c1620;
        ::ll::UntypedStorage<8, 8>  mUnkd4dc08;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingData& operator=(IncomingData const&);
        IncomingData(IncomingData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        IncomingData();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalConnector>>                                  mConnector;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LocalNetworkPeer>>                                mOtherPeer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SPSCQueue<LocalNetworkPeer::IncomingData, 512>>> mIncomingData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk6cf7f4;
    ::ll::UntypedStorage<8, 16> mUnk4398dc;
    ::ll::UntypedStorage<8, 8>  mUnk1898c5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LocalNetworkPeer& operator=(LocalNetworkPeer const&);
    LocalNetworkPeer(LocalNetworkPeer const&);
#endif // @header-generator platform
    LocalNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LocalNetworkPeer();
#else // @header-generator platform
    virtual ~LocalNetworkPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void sendPacket(::std::string const& data, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
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
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LocalNetworkPeer(::LocalConnector&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit LocalNetworkPeer(::LocalConnector& connector);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LocalConnector&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::LocalConnector& connector);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability, ::Compressibility);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
