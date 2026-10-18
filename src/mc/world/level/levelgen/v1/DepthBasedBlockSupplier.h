#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DepthBasedBlockSupplier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DepthBasedBlockSupplier& operator=(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DepthBasedBlockSupplier(::XoroshiroPositionalRandomFactory, ::Block const*);

    MCNAPI ::Block const* getBlock(::BlockPos const&, ::Block const*) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::XoroshiroPositionalRandomFactory, ::Block const*);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
