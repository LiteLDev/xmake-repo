#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

struct BlockDesertAmbientSoundComponent {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canPlaySound(::BlockSource const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool canPlaySound(::BlockSource const& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
