#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/network/BatchedNetworkPeer.h"
#include "mc/network/CompressedNetworkPeer.h"
#include "mc/network/EncryptedNetworkPeer.h"
#include "mc/network/NetworkIdentifier.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class BatchedNetworkPeer;
class CompressedNetworkPeer;
class EncryptedNetworkPeer;
class IPacketObserver;
class IPacketSecurityController;
class LatencyNetworkPeer;
class NetworkPacketRecorder;
class NetworkPeer;
class PacketTraceNetworkPeer;
class Scheduler;
struct NetworkSettingOptions;
// clang-format on

class NetworkConnection {
public:
    // NetworkConnection inner types declare
    // clang-format off
    struct PausedPacket;
    // clang-format on

    // NetworkConnection inner types define
    enum class Type : int {
        Remote = 0,
        Local  = 1,
    };

    struct PausedPacket {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mData;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                          mData;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimepoint;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        PausedPacket& operator=(PausedPacket const&);
        PausedPacket(PausedPacket const&);
        PausedPacket();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mId;
    ::ll::TypedStorage<4, 4, ::NetworkConnection::Type> mType;
    ::ll::TypedStorage<8, 16, std::weak_ptr<NetworkPacketRecorder>> mNetworkPacketRecorder;
    ::ll::TypedStorage<8, 16, std::weak_ptr<EncryptedNetworkPeer>> mEncryptedPeer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<CompressedNetworkPeer>> mCompressedPeer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<BatchedNetworkPeer>> mBatchedPeer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LatencyNetworkPeer>> mLatencyPeer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<PacketTraceNetworkPeer>> mPacketTracePeer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetworkPeer>> mPeer;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPacketTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mClosedTime;
    ::ll::TypedStorage<8, 8, std::bitset<2>> mPausedChannels;
    ::ll::TypedStorage<8, 48, std::queue<NetworkConnection::PausedPacket, std::deque<NetworkConnection::PausedPacket>>> mResumedPackets;
    ::ll::TypedStorage<8, 48, std::array<std::vector<NetworkConnection::PausedPacket>, 2>> mPausedPackets;
    ::ll::TypedStorage<1, 1, bool> mDisconnected;
    ::ll::TypedStorage<1, 1, bool> mShouldCloseConnection;
    ::ll::TypedStorage<1, 1, bool> mEncryptionDisabled;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason> mShouldCloseConnectionReason;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IPacketSecurityController>> mPacketSecurityController;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                      mId;
    ::ll::TypedStorage<4, 4, ::NetworkConnection::Type>                  mType;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::NetworkPacketRecorder>>  mNetworkPacketRecorder;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::EncryptedNetworkPeer>>   mEncryptedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CompressedNetworkPeer>>  mCompressedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BatchedNetworkPeer>>     mBatchedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LatencyNetworkPeer>>     mLatencyPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PacketTraceNetworkPeer>> mPacketTracePeer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkPeer>>          mPeer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastPacketTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mClosedTime;
    ::ll::TypedStorage<4, 4, ::std::bitset<2>>                           mPausedChannels;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<::NetworkConnection::PausedPacket, ::std::deque<::NetworkConnection::PausedPacket>>>
                                                                                                 mResumedPackets;
    ::ll::TypedStorage<8, 48, ::std::array<::std::vector<::NetworkConnection::PausedPacket>, 2>> mPausedPackets;
    ::ll::TypedStorage<1, 1, bool>                                                               mDisconnected;
    ::ll::TypedStorage<1, 1, bool>                                                               mShouldCloseConnection;
    ::ll::TypedStorage<1, 1, bool>                                                               mEncryptionDisabled;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>              mShouldCloseConnectionReason;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IPacketSecurityController>> mPacketSecurityController;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    NetworkConnection& operator=(NetworkConnection const&);
    NetworkConnection(NetworkConnection const&);
#else // @header-generator platform
#endif // @header-generator platform
    NetworkConnection();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkConnection(
        ::NetworkIdentifier const&,
        std::shared_ptr<NetworkPeer>,
        bool,
        ::Bedrock::NonOwnerPointer<IPacketObserver>,
        ::Scheduler&,
        bool,
        ::NetworkSettingOptions const&,
        std::shared_ptr<IPacketSecurityController>
#else // @header-generator platform
    MCAPI NetworkConnection(
        ::NetworkIdentifier const&                     id,
        ::std::shared_ptr<::NetworkPeer>               peer,
        bool                                           isSafeAndFast,
        ::Bedrock::NonOwnerPointer<::IPacketObserver>  packetObserver,
        ::Scheduler&                                   mainThread,
        bool                                           isRawRecordingEnabled,
        ::NetworkSettingOptions const&                 settings,
        ::std::shared_ptr<::IPacketSecurityController> packetSecurityController
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnect();

    MCNAPI ::gsl::not_null<std::shared_ptr<IPacketSecurityController>> getPacketSecurityController();

    MCNAPI ::NetworkPeer::DataStatus receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
    MCAPI ::NetworkPeer::DataStatus receivePacket(
        ::std::string&                                                    receiveBuffer,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setChannelPaused(uint, bool);

    MCNAPI void update();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setChannelPaused(uint channel, bool paused);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::NetworkIdentifier const&,
        std::shared_ptr<NetworkPeer>,
        bool,
        ::Bedrock::NonOwnerPointer<IPacketObserver>,
        ::Scheduler&,
        bool,
        ::NetworkSettingOptions const&,
        std::shared_ptr<IPacketSecurityController>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::NetworkIdentifier const&                     id,
        ::std::shared_ptr<::NetworkPeer>               peer,
        bool                                           isSafeAndFast,
        ::Bedrock::NonOwnerPointer<::IPacketObserver>  packetObserver,
        ::Scheduler&                                   mainThread,
        bool                                           isRawRecordingEnabled,
        ::NetworkSettingOptions const&                 settings,
        ::std::shared_ptr<::IPacketSecurityController> packetSecurityController
#endif // @header-generator platform
    );
    // NOLINTEND
};
