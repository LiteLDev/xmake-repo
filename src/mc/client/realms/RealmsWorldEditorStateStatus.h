#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsWorldEditorStateStatus : int {
    NoAction   = 0,
    InProgress = 1,
    Done       = 2,
    Error      = 3,
};
#else // @header-generator platform
enum class RealmsWorldEditorStateStatus : int {};
#endif // @header-generator platform

}
