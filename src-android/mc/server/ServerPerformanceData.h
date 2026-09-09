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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPerformanceData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<ScriptStat> _collectScriptStats(ulong, ulong, ulong) const;

    MCNAPI void init();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptStat _perfDataToStats(std::string const&, ulong, ::RollingAverageTracker const&);
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
