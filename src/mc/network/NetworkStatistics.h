#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/raknet/RakNetStatistics.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#endif // @header-generator platform
#include "mc/network/PacketObserver.h"
#include "mc/network/TrackerType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkDebugManager;
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TrackerType const>                                         mType;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                           mNetwork;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> const> mNetworkDebugManager;
    ::ll::TypedStorage<4, 4, int>                                                         mTicks;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>                         mTotalOverview;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mTotalPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mDebuggerPacketStats;
    ::ll::TypedStorage<8, 24, ::std::vector<::PacketObserver::PacketStats>>               mTotalCSVPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mCurrentPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::string>>       mCurrentSourceNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::string>>       mCurrentTargetNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 11232, ::std::array<::std::string, 351>>               mPacketNames;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>                mCurrentOverview;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkStatistics::OverviewStats>> mLastSeconds;
    ::ll::TypedStorage<8, 8, double>                                             mStartSeconds;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                       mRakNetStatsReadingLock;
    ::ll::TypedStorage<8, 224, ::RakNet::RakNetStatistics>                       mRakNetStatsReading;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::RakNet::RakNetStatistics&)>> mGetRakNetStatsReading;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Core::OutputFileStream>>         mCSVFile;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStatistics();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkStatistics();
#else // @header-generator platform
    virtual ~NetworkStatistics() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const&, std::string_view);
#else // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const& target, ::std::string_view data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dataReceivedFrom(::NetworkIdentifier const&, std::string const&);
#else // @header-generator platform
    virtual void dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reset();
#else // @header-generator platform
    virtual void reset() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkStatistics(
        ::ServerNetworkSystem&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
#else // @header-generator platform
    MCAPI NetworkStatistics(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkStatistics(
        ::ClientOrServerNetworkSystemRef&&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
#else // @header-generator platform
    MCAPI NetworkStatistics(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearCSVStats();
#else // @header-generator platform
    MCAPI ::std::unordered_map<int, ::PacketObserver::PacketStats> getAndResetDebuggerStats();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<int, PacketObserver::PacketStats> getAndResetDebuggerStats();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::std::string getVerboseInfo() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::array<std::string, 351> const& getPacketNames() const;

    MCNAPI void updateCSV(double);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void updateCSV(double time);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ServerNetworkSystem&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ClientOrServerNetworkSystemRef&&,
        ::TrackerType,
        std::function<bool(RakNet::RakNetStatistics&)>&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkDebugManager>> const
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    MCAPI void $packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    MCAPI void $packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dataSentTo(::NetworkIdentifier const&, std::string_view);
#else // @header-generator platform
    MCAPI void $dataSentTo(::NetworkIdentifier const& target, ::std::string_view data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const&, std::string const&);
#else // @header-generator platform
    MCAPI void $dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reset();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $reset();
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
