#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

enum class ScriptWidgetMouseButtonEventType : int {
    Pressed  = 0,
    Released = 1,
    Drag     = 2,
};

}
#endif // @header-generator platform
