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
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredFlushTracker;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptDiagnostics;
class ScriptPluginManager;
struct ServerPerformanceData;
// clang-format on

class ScriptTickListener : public ::LevelEventListener, public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mFlushingCoroutineSubscription;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&>       mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>                mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&>                  mPluginManager;
    ::ll::TypedStorage<8, 8, ::ScriptDiagnostics&>                    mDiagnostics;
    ::ll::TypedStorage<8, 8, ::ScriptAsyncJobCoordinator&>            mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentTick;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLevelTickStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mScriptTickStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              mScriptCoroutineDuration;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptTickListener();
#else // @header-generator platform
    virtual ~ScriptTickListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelTickStart(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelTickStart(::Level& level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelTickEnd(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelTickEnd(::Level&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onScriptTickStart();
#else // @header-generator platform
    virtual void onScriptTickStart() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onScriptTickEnd();
#else // @header-generator platform
    virtual void onScriptTickEnd() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerPerformanceData& _getServerPerfData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::ServerPerformanceData& _getServerPerfData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTickStart(::Level&);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelTickStart(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTickEnd(::Level&);
#else // @header-generator platform
    MCAPI ::EventResult $onLevelTickEnd(::Level&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScriptTickStart();
#else // @header-generator platform
    MCAPI void $onScriptTickStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScriptTickEnd();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onScriptTickEnd();
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
