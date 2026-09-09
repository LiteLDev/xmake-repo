#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/watchdog/ContextTimings.h"

namespace Scripting::QuickJS {

class WatchdogPhase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                             mName;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::ContextTimings>>         mContextTimings;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mFrameBaseLine;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogPhase& operator=(WatchdogPhase const&);
    WatchdogPhase(WatchdogPhase const&);

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
};

} // namespace Scripting::QuickJS
