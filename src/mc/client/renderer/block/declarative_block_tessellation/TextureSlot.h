#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DeclarativeBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureSlot : uint64 {
    Up    = 1,
    Down  = 0,
    North = 2,
    South = 3,
    West  = 4,
    East  = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextureSlot : uint64 {
    Up    = 1,
    Down  = 0,
    North = 2,
    South = 3,
    West  = 4,
    East  = 5,
};
#else // @header-generator platform
enum class TextureSlot : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform

}
