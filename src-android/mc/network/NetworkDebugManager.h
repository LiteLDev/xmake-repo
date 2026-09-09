#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/SessionDebugState.h"
#include "mc/deps/nether_net/SessionState.h"
#include "mc/network/TrackerStat.h"
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkStatistics;
class StackedGraphBars;
// clang-format on

class NetworkDebugManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
    class Tracker;
    class NetherNetStats;
    // clang-format on

    // NetworkDebugManager inner types define
    class Tracker {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 40, std::mutex> mCurrentStatLock;
        ::ll::TypedStorage<8, 104, ::TrackerStat> mCurrentStat;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
        ::ll::TypedStorage<8, 24, std::vector<TrackerStat>> mStats;
        ::ll::TypedStorage<4, 4, uint> mLastSampleNum;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void update();

        MCNAPI ~Tracker();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class NetherNetStats {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, NetherNet::SessionState>> mSessionStates;
        ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, NetherNet::SessionDebugState>> mSessionDebugStates;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 736, std::array<NetworkDebugManager::Tracker, 4>>        mTrackers;
    ::ll::TypedStorage<4, 4, ::TrackerType>                                        mRenderGraphMode;
    ::ll::TypedStorage<8, 24, std::set<NetworkStatistics*>>                        mStatistics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkDebugManager::NetherNetStats>> mNetherNetStats;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkDebugManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkDebugManager();

    MCNAPI ::NetworkStatistics* getNetworkStatistics(::TrackerType);

    MCNAPI std::vector<TrackerStat> const& getStats(::TrackerType) const;

    MCNAPI void registerStatisticsSource(::NetworkStatistics&);

    MCNAPI void unregisterStatisticsSource(::NetworkStatistics&);

    MCNAPI void update();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_NUMBER_OF_SAMPLES();

    MCNAPI static int const& UPDATE_INTERVAL_MILLISECONDS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
