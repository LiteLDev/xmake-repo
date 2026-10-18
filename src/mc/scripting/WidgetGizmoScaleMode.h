#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class WidgetGizmoScaleMode : int {
    World  = 0,
    Screen = 1,
};

}
#endif // @header-generator platform
