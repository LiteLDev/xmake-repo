#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class RenderChunkBits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 736, std::bitset<5832>> mBits;
    // NOLINTEND
};
#else // @header-generator platform
class RenderChunkBits {};
#endif // @header-generator platform
