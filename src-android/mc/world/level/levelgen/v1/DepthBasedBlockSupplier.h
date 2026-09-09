#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

class DepthBasedBlockSupplier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
    // NOLINTEND

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
};
