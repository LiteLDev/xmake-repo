#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/watchdog/WatchdogPhase.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/watchdog/scripting/IWatchdog.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSRuntime;
namespace Scripting { struct WatchdogEvent; }
namespace Scripting { struct WatchdogSettings; }
namespace Scripting::QuickJS { class ContextTimings; }
// clang-format on

namespace Scripting::QuickJS {

class Watchdog : public ::Scripting::IWatchdog {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    Watchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Watchdog();

    virtual void setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>);

    virtual void setWatchdogInterruptPollCounter(uint);

    virtual void beginTiming(::Scripting::ContextId);

    virtual void endTiming(::Scripting::ContextId);

    virtual void pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>);

    virtual void popPhase();

    virtual void endFrame();

    virtual void resetTimings();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _endContextTiming(::Scripting::ContextId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _outOfMemoryHandler(::JSContext*, void*);

    MCNAPI static int _stackOverflowHandler(::JSContext*, void*);

    MCNAPI static int _timeoutHandler(::JSContext*, void*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>);

    MCNAPI void $setWatchdogInterruptPollCounter(uint);

    MCNAPI void $beginTiming(::Scripting::ContextId);

    MCNAPI void $endTiming(::Scripting::ContextId);

    MCNAPI void $pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>);

    MCNAPI void $popPhase();

    MCNAPI void $endFrame();

    MCNAPI void $resetTimings();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
