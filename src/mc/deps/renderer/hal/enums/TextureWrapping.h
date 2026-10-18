#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureWrapping : uchar {
    ClampToEdge = 0,
    Repeat      = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextureWrapping : uchar {
    ClampToEdge = 0,
    Repeat      = 1,
};
#else // @header-generator platform
enum class TextureWrapping : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
