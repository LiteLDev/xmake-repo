#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct Error; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PendingUnsubscribe;
#endif // @header-generator platform
    struct Slot;
    struct PendingSubscribe;
#if defined(LL_PLAT_A) // @header-generator platform
    struct PendingUnsubscribe;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // ScriptTickSignal inner types define
    enum class IntervalStatus : uint {
        Once    = 0,
        Repeat  = 1,
        Expired = 2,
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct PendingUnsubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> id;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Slot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                      id;
        ::ll::TypedStorage<4, 4, uint>                                                      lastTick;
        ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptTickSignal::IntervalStatus> status;
        ::ll::TypedStorage<4, 4, uint>                                                      initialInterval;
        ::ll::TypedStorage<4, 4, uint>                                                      currentInterval;
        ::ll::TypedStorage<8, 120, ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>>> closure;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Slot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct PendingSubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 144, ::ScriptModuleMinecraft::ScriptTickSignal::Slot> slot;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingSubscribe();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mNextId;
    ::ll::TypedStorage<1, 1, bool> mDispatching;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptTickSignal::Slot>> mActive;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe, ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>> mPending;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                            mNextId;
    ::ll::TypedStorage<1, 1, bool>                                                            mDispatching;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>> mActive;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe,
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>>
        mPending;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptTickSignal& operator=(ScriptTickSignal const&);
    ScriptTickSignal(ScriptTickSignal const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptTickSignal& operator=(::ScriptModuleMinecraft::ScriptTickSignal&&);
#else // @header-generator platform
    MCAPI void processTick(uint currentTick, ::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processTick(uint, ::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI uint scheduleInterval(::Scripting::Closure<void()>&& closure, uint interval, uint currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint scheduleInterval(::Scripting::Closure<void()>&&, uint, uint);
#else // @header-generator platform
    MCAPI uint scheduleTimeout(::Scripting::Closure<void()>&& closure, uint delay, uint currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint scheduleTimeout(std::function<void()>, uint, uint);
#else // @header-generator platform
    MCAPI uint scheduleTimeout(::std::function<void()> function, uint delay, uint currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint scheduleTimeout(::Scripting::Closure<void()>&&, uint, uint);

    MCNAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&&, uint);

    MCNAPI void unschedule(uint);
#else // @header-generator platform
    MCAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&& closure, uint currentTick);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
