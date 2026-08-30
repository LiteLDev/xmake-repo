#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelEventCoordinator;
class ScriptAsyncJobCoordinator;
class ScriptDeferredEventCoordinator;
class ScriptDeferredFlushTracker;
class ScriptDiagnostics;
class ScriptPluginManager;
struct ServerPerformanceData;
// clang-format on

class ScriptTickListener : public ::LevelEventListener, public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlushingCoroutineSubscription;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&> mPluginManager;
    ::ll::TypedStorage<8, 8, ::ScriptDiagnostics&> mDiagnostics;
    ::ll::TypedStorage<8, 8, ::ScriptAsyncJobCoordinator&> mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, ulong> mCurrentTick;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLevelTickStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mScriptTickStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mScriptCoroutineDuration;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTickListener();

    virtual ::EventResult onLevelTickStart(::Level&);

    virtual ::EventResult onLevelTickEnd(::Level&);

    virtual void onScriptTickStart();

    virtual void onScriptTickEnd();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerPerformanceData& _getServerPerfData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelTickStart(::Level&);

    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI void $onScriptTickStart();

    MCNAPI void $onScriptTickEnd();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
