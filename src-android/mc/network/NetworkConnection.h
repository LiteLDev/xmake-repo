#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mData;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PausedPacket& operator=(PausedPacket const&);
        PausedPacket(PausedPacket const&);
        PausedPacket();
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkConnection& operator=(NetworkConnection const&);
    NetworkConnection(NetworkConnection const&);
    NetworkConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkConnection(
        ::NetworkIdentifier const&,
        std::shared_ptr<NetworkPeer>,
        bool,
        ::Bedrock::NonOwnerPointer<IPacketObserver>,
        ::Scheduler&,
        bool,
        ::NetworkSettingOptions const&,
        std::shared_ptr<IPacketSecurityController>
    );

    MCNAPI void disconnect();

    MCNAPI ::gsl::not_null<std::shared_ptr<IPacketSecurityController>> getPacketSecurityController();

    MCNAPI ::NetworkPeer::DataStatus receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
    );

    MCNAPI void setChannelPaused(uint, bool);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetworkIdentifier const&,
        std::shared_ptr<NetworkPeer>,
        bool,
        ::Bedrock::NonOwnerPointer<IPacketObserver>,
        ::Scheduler&,
        bool,
        ::NetworkSettingOptions const&,
        std::shared_ptr<IPacketSecurityController>
    );
    // NOLINTEND
};
