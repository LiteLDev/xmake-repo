#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
// clang-format on

class BatchedNetworkPeer : public ::NetworkPeer {
public:
    // BatchedNetworkPeer inner types declare
    // clang-format off
    struct DataCallback;
    // clang-format on

    // BatchedNetworkPeer inner types define
    struct DataCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>      data;
        ::ll::TypedStorage<4, 4, ::Compressibility> compressible;
        ::ll::UntypedStorage<8, 48>                 callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataCallback& operator=(DataCallback const&);
        DataCallback(DataCallback const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DataCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::BinaryStream>                      mOutgoingData;
    ::ll::TypedStorage<8, 8, ulong>                                mCompressibleBytes;
    ::ll::TypedStorage<8, 24, std::string>                         mIncomingDataBuffer;
    ::ll::TypedStorage<8, 72, std::optional<ReadOnlyBinaryStream>> mIncomingData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>           mTaskGroup;
    ::ll::UntypedStorage<8, 80>                                    mSendQueue;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                    mTaskRunning;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                   mQueuedPackets;
    ::ll::TypedStorage<8, 8, ulong>                                mSentPackets;
    ::ll::TypedStorage<1, 1, bool>                                 mAsyncEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    BatchedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BatchedNetworkPeer();

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual void update();

    virtual void flush(std::function<void ()>&&);

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, ::Scheduler&);

    MCNAPI void setAsyncEnabled(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<NetworkPeer>, ::Scheduler&);
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

    MCNAPI void $flush(std::function<void()>&&);

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
