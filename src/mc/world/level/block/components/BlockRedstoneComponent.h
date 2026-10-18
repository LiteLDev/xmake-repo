#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockRedstoneComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRedstoneConductor;
    ::ll::TypedStorage<1, 1, bool> mAllowsWireToStepDown;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool const allowsWireToStepDown(::Block const&);

    MCNAPI static bool const isRedstoneConductor(::Block const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
