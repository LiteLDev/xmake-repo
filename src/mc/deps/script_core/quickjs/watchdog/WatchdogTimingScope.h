#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { class Watchdog; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct WatchdogTimingScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::Watchdog*> mWatchdog;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>          mContextId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk9a2355;
    ::ll::UntypedStorage<1, 1> mUnk37d998;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WatchdogTimingScope& operator=(WatchdogTimingScope const&);
    WatchdogTimingScope(WatchdogTimingScope const&);
#endif // @header-generator platform
    WatchdogTimingScope();
};

} // namespace Scripting::QuickJS
