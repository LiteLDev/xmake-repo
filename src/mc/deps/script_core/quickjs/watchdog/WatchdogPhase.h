#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/watchdog/ContextTimings.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class WatchdogPhase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                             mName;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::ContextTimings>>         mContextTimings;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mFrameBaseLine;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkde11b4;
    ::ll::UntypedStorage<8, 24> mUnkf051f9;
    ::ll::UntypedStorage<8, 8>  mUnk599322;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogPhase& operator=(WatchdogPhase const&);
    WatchdogPhase(WatchdogPhase const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::QuickJS::ContextTimings& addContextTimings(::Scripting::QuickJS::ContextTimings&&);

    MCNAPI ~WatchdogPhase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    WatchdogPhase();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
