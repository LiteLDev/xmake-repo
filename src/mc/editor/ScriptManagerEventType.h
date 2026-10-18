#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ScriptManagerEventType : int {
    ScriptSystemTeardown = 0,
    ScriptSystemRebuild  = 1,
};

}
#endif // @header-generator platform
