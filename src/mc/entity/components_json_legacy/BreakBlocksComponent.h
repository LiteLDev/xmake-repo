#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
struct BreakBlocksDescription;
// clang-format on

class BreakBlocksComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void breakNearbyBlocks(::Actor&);
#else // @header-generator platform
    MCAPI void breakNearbyBlocks(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isBreakable(::BreakBlocksDescription const*, ::BlockType const&);
#else // @header-generator platform
    MCAPI static bool isBreakable(::BreakBlocksDescription const* description, ::BlockType const& block);
#endif // @header-generator platform
    // NOLINTEND
};
