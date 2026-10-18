#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
class IConstBlockSource;
struct TickingSystemWithInfo;
// clang-format on

class BlockClimberSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    canBlockBeAscendedByJumping(::BlockType const&, ::IConstBlockSource const&, ::BlockPos const&, bool, bool, bool);
#else // @header-generator platform
    MCAPI static bool canBlockBeAscendedByJumping(
        ::BlockType const&         block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        bool                       canStandOnSnow,
        bool                       hasLightweightFamily,
        bool                       isPlayer
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
