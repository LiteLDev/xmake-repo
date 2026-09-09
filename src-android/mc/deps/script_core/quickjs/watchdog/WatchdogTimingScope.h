#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { class Watchdog; }
// clang-format on

namespace Scripting::QuickJS {

struct WatchdogTimingScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::Watchdog*> mWatchdog;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>          mContextId;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogTimingScope();
};

} // namespace Scripting::QuickJS
