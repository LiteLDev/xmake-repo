#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsWorldEditorState : int {
    Unknown   = 0,
    Idle      = 1,
    Fetching  = 2,
    Posting   = 3,
    Resetting = 4,
    Replacing = 5,
};
#else // @header-generator platform
enum class RealmsWorldEditorState : int {};
#endif // @header-generator platform

}
