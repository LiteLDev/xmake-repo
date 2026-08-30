#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/raknet/RakNetStatistics.h"
#include "mc/network/PacketObserver.h"
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
class NetworkDebugManager;
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
class WeakEntityRef;
namespace Core { class OutputFileStream; }
// clang-format on

class NetworkStatistics : public ::PacketObserver {
public:
    // NetworkStatistics inner types declare
    // clang-format off
    struct OverviewStats;
    // clang-format on

    // NetworkStatistics inner types define
    struct OverviewStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> sentBytesUnpacked;
        ::ll::TypedStorage<4, 4, uint> sentBytesPacked;
        ::ll::TypedStorage<4, 4, uint> receivedBytesUnpacked;
        ::ll::TypedStorage<4, 4, uint> receivedBytesPacked;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TrackerType const>                            mType;
    ::ll::UntypedStorage<8, 16>                                              mNetwork;
    ::ll::UntypedStorage<8, 24>                                              mNetworkDebugManager;
    ::ll::TypedStorage<4, 4, int>                                            mTicks;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>            mTotalOverview;
    ::ll::UntypedStorage<8, 40>                                              mTotalPacketStats;
    ::ll::UntypedStorage<8, 40>                                              mDebuggerPacketStats;
    ::ll::UntypedStorage<8, 24>                                              mTotalCSVPacketStats;
    ::ll::UntypedStorage<8, 40>                                              mCurrentPacketStats;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::string>>        mCurrentSourceNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::string>>        mCurrentTargetNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 8424, std::array<std::string, 351>>                mPacketNames;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>            mCurrentOverview;
    ::ll::TypedStorage<8, 24, std::vector<NetworkStatistics::OverviewStats>> mLastSeconds;
    ::ll::TypedStorage<8, 8, double>                                         mStartSeconds;
    ::ll::TypedStorage<4, 40, std::mutex>                                    mRakNetStatsReadingLock;
    ::ll::UntypedStorage<8, 232>                                             mRakNetStatsReading;
    ::ll::UntypedStorage<8, 48>                                              mGetRakNetStatsReading;
    ::ll::UntypedStorage<8, 16>                                              mCSVFile;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStatistics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkStatistics();

    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);

    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);

    virtual void dataSentTo(::NetworkIdentifier const&, std::string_view);

    virtual void dataReceivedFrom(::NetworkIdentifier const&, std::string const&);

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkStatistics(
        ::ServerNetworkSystem&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
    );

    MCNAPI NetworkStatistics(
        ::ClientOrServerNetworkSystemRef&&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
    );

    MCNAPI void _clearCSVStats();

    MCNAPI std::unordered_map<int, PacketObserver::PacketStats> getAndResetDebuggerStats();

    MCNAPI std::array<std::string, 351> const& getPacketNames() const;

    MCNAPI void updateCSV(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerNetworkSystem&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
    );

    MCNAPI void* $ctor(
        ::ClientOrServerNetworkSystemRef&&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);

    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);

    MCNAPI void $dataSentTo(::NetworkIdentifier const&, std::string_view);

    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const&, std::string const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
