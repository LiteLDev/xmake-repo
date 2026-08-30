#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
    struct Slot;
    struct PendingSubscribe;
    struct PendingUnsubscribe;
    // clang-format on

    // ScriptTickSignal inner types define
    enum class IntervalStatus : uint {
        Once    = 0,
        Repeat  = 1,
        Expired = 2,
    };

    struct Slot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                      id;
        ::ll::TypedStorage<4, 4, uint>                                                      lastTick;
        ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptTickSignal::IntervalStatus> status;
        ::ll::TypedStorage<4, 4, uint>                                                      initialInterval;
        ::ll::UntypedStorage<4, 16>                                                         currentInterval;
        ::ll::UntypedStorage<8, 128>                                                        closure;
        // NOLINTEND

    public:
        // prevent constructor by default
        Slot& operator=(Slot const&);
        Slot(Slot const&);
        Slot();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Slot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PendingSubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160> slot;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingSubscribe& operator=(PendingSubscribe const&);
        PendingSubscribe(PendingSubscribe const&);
        PendingSubscribe();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingSubscribe();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PendingUnsubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> id;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mNextId;
    ::ll::TypedStorage<1, 1, bool> mDispatching;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptTickSignal::Slot>> mActive;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe, ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>> mPending;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickSignal& operator=(ScriptTickSignal const&);
    ScriptTickSignal(ScriptTickSignal const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptTickSignal& operator=(::ScriptModuleMinecraft::ScriptTickSignal&&);

    MCNAPI void processTick(uint, ::ScriptDeferredFlushTracker&);

    MCNAPI uint scheduleInterval(::Scripting::Closure<void()>&&, uint, uint);

    MCNAPI uint scheduleTimeout(std::function<void()>, uint, uint);

    MCNAPI uint scheduleTimeout(::Scripting::Closure<void()>&&, uint, uint);

    MCNAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&&, uint);

    MCNAPI void unschedule(uint);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
