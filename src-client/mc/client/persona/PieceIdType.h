#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class PieceIdType : int {
    Unknown      = 0,
    DefaultPiece = 1,
    PremiumPiece = 2,
    DefaultEmote = 3,
    PremiumEmote = 4,
    ClassicSkin  = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
