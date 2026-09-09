#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/watchdog/scripting/WatchdogEventType.h"

namespace Scripting {

struct WatchdogEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Scripting::WatchdogEventType>                        mType;
    ::ll::UntypedStorage<1, 0>                                                      mContextId;
    ::ll::TypedStorage<8, 24, std::string>                                          mPhaseName;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mTimeMs;
    ::ll::TypedStorage<8, 8, ulong>                                                 mMemoryUsageMB;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogEvent& operator=(WatchdogEvent const&);
    WatchdogEvent(WatchdogEvent const&);
    WatchdogEvent();
};

} // namespace Scripting
