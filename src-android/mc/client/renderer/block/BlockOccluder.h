#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockGraphics;
class BlockPos;
class BlockTessellatorCache;
struct AirAndSimpleBlockBits;
// clang-format on

class BlockOccluder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<6>>           mFacingOccluded;
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache&> mBlockCache;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockOccluder& operator=(BlockOccluder const&);
    BlockOccluder(BlockOccluder const&);
    BlockOccluder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _shouldRenderFace(::BlockPos const&, uchar, ::AABB const&, ::BlockPos const&) const;

    MCNAPI void _updateRenderFace(::Block const&, ::BlockPos const&, ::AABB const&, uchar);
    // NOLINTEND
};
