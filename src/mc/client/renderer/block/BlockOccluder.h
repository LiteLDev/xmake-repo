#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockTessellatorCache;
// clang-format on

class BlockOccluder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<6>>         mFacingOccluded;
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
    MCAPI bool
    _shouldRenderFace(::BlockPos const& neighborPos, uchar face, ::AABB const& shape, ::BlockPos const& pos) const;

    MCAPI void _updateRenderFace(::Block const& block, ::BlockPos const& p, ::AABB const& shape, uchar face);
    // NOLINTEND
};
#else // @header-generator platform
class BlockOccluder {};
#endif // @header-generator platform
#endif // @header-generator platform
