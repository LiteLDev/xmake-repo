#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class IWatchdog; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class WatchdogPhaseScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IWatchdog*> mWatchdog;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk95f4d5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WatchdogPhaseScope& operator=(WatchdogPhaseScope const&);
    WatchdogPhaseScope(WatchdogPhaseScope const&);
    WatchdogPhaseScope();
#endif // @header-generator platform
};

} // namespace Scripting
