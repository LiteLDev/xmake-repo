#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/AverageTracker.h"
#include "mc/world/level/chunk/RollingAverageTracker.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
class ScriptStatCollector;
// clang-format on

struct ServerPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mServerMainLoopTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mServerUpdateTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mServerGameTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mServerRealtimeTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mServerNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mSubChunkRequestNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mBlobCacheNetworkHandlingTime;
    ::ll::TypedStorage<8, 24, std::map<ulong, AverageTracker>>     mNetworkChunkPublisherTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                    mCoroutineTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>            mServerLevelTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>            mServerScriptTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>            mServerScriptJobTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mScriptStatCollector;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mServerMainLoopTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mServerUpdateTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mServerGameTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mServerRealtimeTickTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mServerNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mSubChunkRequestNetworkHandlingTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mBlobCacheNetworkHandlingTime;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::AverageTracker>>    mNetworkChunkPublisherTime;
    ::ll::TypedStorage<8, 48, ::AverageTracker>                        mCoroutineTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>                mServerLevelTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>                mServerScriptTickTime;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>                mServerScriptJobTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>> mScriptStatCollector;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerPerformanceData();
#else // @header-generator platform
    virtual ~ServerPerformanceData() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectScriptStats(ulong, ulong, ulong) const;
#else // @header-generator platform
    MCAPI ServerPerformanceData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void init();
#else // @header-generator platform
    MCAPI ::std::optional<::ScriptStat>
    _collectScriptStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectionFrequency) const;

    MCAPI void init();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptStat _perfDataToStats(std::string const&, ulong, ::RollingAverageTracker const&);
#else // @header-generator platform
    MCAPI static ::ScriptStat
    _perfDataToStats(::std::string const& name, uint64 tickCount, ::RollingAverageTracker const& tracker);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
