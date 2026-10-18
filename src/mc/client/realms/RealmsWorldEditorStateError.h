#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsWorldEditorStateError : int {
    NetworkError   = 0,
    ServiceError   = 1,
    ProfanityError = 2,
};
#else // @header-generator platform
enum class RealmsWorldEditorStateError : int {};
#endif // @header-generator platform

}
