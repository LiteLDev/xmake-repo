#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/quickjs/watchdog/WatchdogPhase.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/watchdog/scripting/IWatchdog.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct JSRuntime;
#else // @header-generator platform
namespace Scripting { struct ContextId; }
#endif // @header-generator platform
namespace Scripting { struct WatchdogEvent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct WatchdogSettings; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::QuickJS { class ContextTimings; }
// clang-format on

namespace Scripting::QuickJS {

class Watchdog : public ::Scripting::IWatchdog {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::JSRuntime*> mJsRuntime;
    ::ll::UntypedStorage<8, 48> mWatchdogEventHandler;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mHangThreshold;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000>>>> mSlowThreshold;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000>>>> mSpikeThreshold;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mContextCallStartTime;
    ::ll::TypedStorage<8, 48, std::stack<Scripting::ContextId, std::deque<Scripting::ContextId>>> mContextCallStack;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::WatchdogPhase>> mWatchdogPhases;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPhaseStack;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::WatchdogPhase*> mActivePhase;
    ::ll::TypedStorage<1, 1, bool> mHighMemoryUsageWarningSent;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk4f214f;
    ::ll::UntypedStorage<8, 64> mUnke0fc70;
    ::ll::UntypedStorage<8, 8>  mUnk74e2d6;
    ::ll::UntypedStorage<8, 16> mUnk83402b;
    ::ll::UntypedStorage<8, 16> mUnke744e8;
    ::ll::UntypedStorage<8, 8>  mUnk2babb0;
    ::ll::UntypedStorage<8, 40> mUnk149bab;
    ::ll::UntypedStorage<8, 24> mUnka13f8e;
    ::ll::UntypedStorage<8, 24> mUnk9a7287;
    ::ll::UntypedStorage<8, 8>  mUnk341985;
    ::ll::UntypedStorage<1, 1>  mUnkc10073;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Watchdog& operator=(Watchdog const&);
    Watchdog(Watchdog const&);
#endif // @header-generator platform
    Watchdog();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Watchdog();
#else // @header-generator platform
    virtual ~Watchdog() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>);
#else // @header-generator platform
    virtual void
    setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWatchdogInterruptPollCounter(uint);
#else // @header-generator platform
    virtual void setWatchdogInterruptPollCounter(uint counter) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void beginTiming(::Scripting::ContextId);
#else // @header-generator platform
    virtual void beginTiming(::Scripting::ContextId contextId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void endTiming(::Scripting::ContextId);
#else // @header-generator platform
    virtual void endTiming(::Scripting::ContextId contextId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>);
#else // @header-generator platform
    virtual void pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void popPhase();
#else // @header-generator platform
    virtual void popPhase() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void endFrame();
#else // @header-generator platform
    virtual void endFrame() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetTimings();
#else // @header-generator platform
    virtual void resetTimings() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _endContextTiming(::Scripting::ContextId);
#else // @header-generator platform
    MCNAPI ::Scripting::QuickJS::ContextTimings& _getOrCreateContextTime(::Scripting::ContextId contextId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _outOfMemoryHandler(::JSContext*, void*);
#else // @header-generator platform
    MCNAPI static void _outOfMemoryHandler(::JSContext* ctx, void* runtimeOpaque);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _stackOverflowHandler(::JSContext*, void*);
#else // @header-generator platform
    MCNAPI static int _stackOverflowHandler(::JSContext* ctx, void* runtimeOpaque);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _timeoutHandler(::JSContext*, void*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static int _timeoutHandler(::JSContext* ctx, void* runtimeOpaque);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>);
#else // @header-generator platform
    MCNAPI void $setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWatchdogInterruptPollCounter(uint);
#else // @header-generator platform
    MCNAPI void $setWatchdogInterruptPollCounter(uint counter);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $beginTiming(::Scripting::ContextId);
#else // @header-generator platform
    MCNAPI void $beginTiming(::Scripting::ContextId contextId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $endTiming(::Scripting::ContextId);
#else // @header-generator platform
    MCNAPI void $endTiming(::Scripting::ContextId contextId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>);
#else // @header-generator platform
    MCNAPI void $pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine);
#endif // @header-generator platform

    MCNAPI void $popPhase();

    MCNAPI void $endFrame();

    MCNAPI void $resetTimings();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace Scripting::QuickJS
