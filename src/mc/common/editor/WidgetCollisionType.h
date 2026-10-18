#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Widgets {

enum class WidgetCollisionType : int {
    None   = 0,
    Radius = 1,
    Bounds = 2,
};

}
#endif // @header-generator platform
