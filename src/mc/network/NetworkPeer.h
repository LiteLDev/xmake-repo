#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"

class NetworkPeer {
public:
    // NetworkPeer inner types declare
    // clang-format off
    struct NetworkStatus;
    // clang-format on

    // NetworkPeer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Reliability : int {
        Reliable            = 0,
        ReliableOrdered     = 1,
        Unreliable          = 2,
        UnreliableSequenced = 3,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class DataStatus : int {
        HasData    = 0,
        NoData     = 1,
        BrokenData = 2,
    };

    enum class NetworkLoad : int {
        Unrestricted = 0,
        Low          = 1,
        Medium       = 2,
        High         = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Reliability : int {
        Reliable            = 0,
        ReliableOrdered     = 1,
        Unreliable          = 2,
        UnreliableSequenced = 3,
    };

#endif // @header-generator platform
    struct NetworkStatus {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::NetworkPeer::NetworkLoad>                            mLoad;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mCurrentPing;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mAveragePing;
        ::ll::TypedStorage<4, 4, int>                                                   mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, float>                                                 mCurrentPacketLoss;
        ::ll::TypedStorage<4, 4, float>                                                 mAveragePacketLoss;
        ::ll::TypedStorage<8, 8, ulong>                                                 mTotalBytesReceived;
        ::ll::TypedStorage<8, 8, ulong>                                                 mTotalBytesSent;
        ::ll::TypedStorage<8, 8, ulong>                                                 mCurrentBytesSendBuffer;
        ::ll::TypedStorage<4, 4, int>                                                   mICEState;
        ::ll::TypedStorage<1, 1, bool>                                                  mUsingRelays;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::NetworkPeer::NetworkLoad>  mLoad;
        ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mCurrentPing;
        ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mAveragePing;
        ::ll::TypedStorage<4, 4, int>                         mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, float>                       mCurrentPacketLoss;
        ::ll::TypedStorage<4, 4, float>                       mAveragePacketLoss;
        ::ll::TypedStorage<8, 8, uint64>                      mTotalBytesReceived;
        ::ll::TypedStorage<8, 8, uint64>                      mTotalBytesSent;
        ::ll::TypedStorage<8, 8, uint64>                      mCurrentBytesSendBuffer;
        ::ll::TypedStorage<4, 4, int>                         mICEState;
        ::ll::TypedStorage<1, 1, bool>                        mUsingRelays;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PacketRecvTimepointPtr = std::shared_ptr<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;
#else // @header-generator platform
    using PacketRecvTimepoint = ::std::chrono::steady_clock::time_point;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PacketRecvTimepoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;
#else // @header-generator platform
    using PacketRecvTimepointPtr = ::std::shared_ptr<::std::chrono::steady_clock::time_point>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetworkPeer>> mPeer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkPeer>> mPeer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NetworkPeer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~NetworkPeer();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility) = 0;
#else // @header-generator platform
    virtual void
    sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible) = 0;
#endif // @header-generator platform

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const = 0;

    virtual void update();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush(std::function<void ()>&&);
#else // @header-generator platform
    virtual void flush(::std::function<void()>&& callback);
#endif // @header-generator platform

    virtual bool isLocal() const;

    virtual bool isEncrypted() const;

    virtual bool isLan() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update();
#else // @header-generator platform
    MCAPI void $update();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flush(std::function<void()>&&);
#else // @header-generator platform
    MCAPI void $flush(::std::function<void()>&& callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLocal() const;
#else // @header-generator platform
    MCAPI bool $isLocal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEncrypted() const;
#else // @header-generator platform
    MCAPI bool $isEncrypted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLan() const;
#else // @header-generator platform
    MCAPI bool $isLan() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
