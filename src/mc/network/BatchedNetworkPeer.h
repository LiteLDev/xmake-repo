#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BinaryStream.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>           data;
        ::ll::TypedStorage<4, 4, ::Compressibility>        compressible;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> callback;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::BinaryStream>                                       mOutgoingData;
    ::ll::TypedStorage<8, 8, uint64>                                                mCompressibleBytes;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mIncomingDataBuffer;
    ::ll::TypedStorage<8, 80, ::std::optional<::ReadOnlyBinaryStream>>              mIncomingData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mTaskGroup;
    ::ll::TypedStorage<8, 80, ::SPSCQueue<::BatchedNetworkPeer::DataCallback, 512>> mSendQueue;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mTaskRunning;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                                 mQueuedPackets;
    ::ll::TypedStorage<8, 8, uint64>                                                mSentPackets;
    ::ll::TypedStorage<1, 1, bool>                                                  mAsyncEnabled;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BatchedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BatchedNetworkPeer();
#else // @header-generator platform
    virtual ~BatchedNetworkPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void flush(::std::function<void()>&& callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush(std::function<void ()>&&);
#else // @header-generator platform
    virtual void update() /*override*/;
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
    MCNAPI BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, ::Scheduler&);

    MCNAPI void setAsyncEnabled(bool);
#else // @header-generator platform
    MCAPI BatchedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer, ::Scheduler& scheduler);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<NetworkPeer>, ::Scheduler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer, ::Scheduler& scheduler);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    MCAPI void $flush(::std::function<void()>&& callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#else // @header-generator platform
    MCAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update();
#else // @header-generator platform
    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flush(std::function<void()>&&);
#else // @header-generator platform
    MCAPI void $update();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
    MCAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
