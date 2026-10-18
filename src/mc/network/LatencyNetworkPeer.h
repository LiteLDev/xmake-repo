#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/network/Compressibility.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/DevConnectionQuality.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/NetworkPeer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class LatencyNetworkPeer : public ::NetworkPeer {
public:
    // LatencyNetworkPeer inner types define
    using Content = ::Bedrock::Threading::Async<void>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLatency;
    ::ll::UntypedStorage<8, 56>                                                     mPredecessor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                            mTaskGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mLatency;
    ::ll::TypedStorage<
        8,
        96,
        ::Bedrock::Threading::BasicLockbox<::Bedrock::Threading::Async<void>, ::Bedrock::Threading::Mutex>>
                                                             mPredecessor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LatencyNetworkPeer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LatencyNetworkPeer() = default;
#else // @header-generator platform
    virtual ~LatencyNetworkPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setQuality(::DevConnectionQuality);
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
