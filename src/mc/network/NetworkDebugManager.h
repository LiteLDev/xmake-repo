#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/SessionDebugState.h"
#include "mc/deps/nether_net/SessionState.h"
#include "mc/network/TrackerStat.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class NetworkIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkStatistics;
#if defined(LL_PLAT_A) // @header-generator platform
class StackedGraphBars;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class NetworkDebugManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class Tracker;
#else // @header-generator platform
#endif // @header-generator platform
    class NetherNetStats;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class Tracker;
#endif // @header-generator platform
    // clang-format on

    // NetworkDebugManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    class NetherNetStats {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, NetherNet::SessionState>> mSessionStates;
        ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, NetherNet::SessionDebugState>> mSessionDebugStates;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnkb551f9;
        ::ll::UntypedStorage<8, 64> mUnk9eb8b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetherNetStats& operator=(NetherNetStats const&);
        NetherNetStats(NetherNetStats const&);
        NetherNetStats();
    };

    class Tracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80>  mUnk8f8fe3;
        ::ll::UntypedStorage<8, 152> mUnkc955b2;
        ::ll::UntypedStorage<8, 8>   mUnkad80c2;
        ::ll::UntypedStorage<8, 24>  mUnkf3431e;
        ::ll::UntypedStorage<4, 4>   mUnkb89ac4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tracker& operator=(Tracker const&);
        Tracker(Tracker const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Tracker();

#ifdef LL_PLAT_C
        MCNAPI void update();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 736, std::array<NetworkDebugManager::Tracker, 4>>        mTrackers;
    ::ll::TypedStorage<4, 4, ::TrackerType>                                        mRenderGraphMode;
    ::ll::TypedStorage<8, 24, std::set<NetworkStatistics*>>                        mStatistics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkDebugManager::NetherNetStats>> mNetherNetStats;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 1088> mUnk448985;
    ::ll::UntypedStorage<4, 4>    mUnkddd6be;
    ::ll::UntypedStorage<8, 16>   mUnk931b60;
    ::ll::UntypedStorage<8, 8>    mUnk9694c4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkDebugManager& operator=(NetworkDebugManager const&);
    NetworkDebugManager(NetworkDebugManager const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkDebugManager();
#else // @header-generator platform
    virtual ~NetworkDebugManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkDebugManager();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkStatistics* getNetworkStatistics(::TrackerType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::NetworkStatistics* getNetworkStatistics(::TrackerType type);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void registerStatisticsSource(::NetworkStatistics& s);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
