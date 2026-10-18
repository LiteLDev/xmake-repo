#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptPluginManager;
class ServerLevel;
namespace Scripting { class IWatchdog; }
#else // @header-generator platform
namespace Scripting { struct ContextId; }
#endif // @header-generator platform
// clang-format on

class ScriptWatchdog {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            mDefaultDescriptor;
    ::ll::TypedStorage<8, 40, std::unordered_set<Scripting::ContextId>> mUserDisabledTimingWarningsPerContext;
    ::ll::TypedStorage<4, 4, uint>                                      mSpikeCount;
    ::ll::TypedStorage<4, 4, uint>                                      mSlowCount;
    ::ll::TypedStorage<4, 4, uint>                                      mHangCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnkd7bdf5;
    ::ll::UntypedStorage<8, 64> mUnk7150c1;
    ::ll::UntypedStorage<4, 4>  mUnkeb8210;
    ::ll::UntypedStorage<4, 4>  mUnk7e0607;
    ::ll::UntypedStorage<4, 4>  mUnkabaa0e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptWatchdog(ScriptWatchdog const&);
    ScriptWatchdog();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWatchdog();
#else // @header-generator platform
    MCNAPI void disableTimingWarnings(::Scripting::ContextId contextId, bool disabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disableTimingWarnings(::Scripting::ContextId, bool);
#else // @header-generator platform
    MCNAPI ::ScriptWatchdog& operator=(::ScriptWatchdog const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initWatchdogHandler(::Scripting::IWatchdog&, ::ServerLevel&, ::ScriptPluginManager*);
#else // @header-generator platform
    MCNAPI ~ScriptWatchdog();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SCRIPT_WATCHDOG_JOB_QUEUE_PHASE_NAME();
#else // @header-generator platform
    MCNAPI static ::std::string const& SCRIPT_WATCHDOG_JOB_QUEUE_PHASE_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
