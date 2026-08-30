#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/network/Compressibility.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/network/NetworkPeer.h"

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
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLatency;
    ::ll::UntypedStorage<8, 56>                                                     mPredecessor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                            mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LatencyNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LatencyNetworkPeer() = default;

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setQuality(::DevConnectionQuality);
    // NOLINTEND
};
