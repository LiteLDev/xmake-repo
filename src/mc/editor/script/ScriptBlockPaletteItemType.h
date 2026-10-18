#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

enum class ScriptBlockPaletteItemType : int {
    Simple      = 0,
    Probability = 1,
};

}
#endif // @header-generator platform
