#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class EditorRealmsServiceAvailability : int {
    NotLoggedIn          = 0,
    NoRealmsSubscription = 1,
    DedicatedServer      = 2,
    NotServerHost        = 3,
    Success              = 4,
    Unknown              = 5,
};

}
#endif // @header-generator platform
