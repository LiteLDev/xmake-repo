#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TouchControlEditorState : int {
    Inactive = 0,
    Deciding = 1,
    Moving   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TouchControlEditorState : int {
    Inactive = 0,
    Deciding = 1,
    Moving   = 2,
};
#else // @header-generator platform
enum class TouchControlEditorState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
