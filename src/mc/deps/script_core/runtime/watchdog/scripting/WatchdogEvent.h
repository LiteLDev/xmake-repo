#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/watchdog/scripting/WatchdogEventType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct WatchdogEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Scripting::WatchdogEventType>                        mType;
    ::ll::UntypedStorage<1, 0>                                                      mContextId;
    ::ll::TypedStorage<8, 24, std::string>                                          mPhaseName;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mTimeMs;
    ::ll::TypedStorage<8, 8, ulong>                                                 mMemoryUsageMB;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnka61f79;
    ::ll::UntypedStorage<1, 1>  mUnk2ce2d5;
    ::ll::UntypedStorage<8, 32> mUnk157a3d;
    ::ll::UntypedStorage<8, 8>  mUnk636071;
    ::ll::UntypedStorage<8, 8>  mUnkff37ad;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogEvent& operator=(WatchdogEvent const&);
    WatchdogEvent(WatchdogEvent const&);
    WatchdogEvent();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WatchdogEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Scripting
