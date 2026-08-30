#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManager;
class ServerLevel;
namespace Scripting { class IWatchdog; }
// clang-format on

class ScriptWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            mDefaultDescriptor;
    ::ll::TypedStorage<8, 40, std::unordered_set<Scripting::ContextId>> mUserDisabledTimingWarningsPerContext;
    ::ll::TypedStorage<4, 4, uint>                                      mSpikeCount;
    ::ll::TypedStorage<4, 4, uint>                                      mSlowCount;
    ::ll::TypedStorage<4, 4, uint>                                      mHangCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWatchdog();

    MCNAPI void disableTimingWarnings(::Scripting::ContextId, bool);

    MCNAPI void initWatchdogHandler(::Scripting::IWatchdog&, ::ServerLevel&, ::ScriptPluginManager*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& SCRIPT_WATCHDOG_JOB_QUEUE_PHASE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
