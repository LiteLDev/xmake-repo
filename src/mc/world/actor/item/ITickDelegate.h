#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

class ITickDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickDelegate() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLand(::FallingBlock const&, ::IBlockSource&, ::BlockPos const&) = 0;
#else // @header-generator platform
    virtual void onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void breakBlock(::FallingBlockActor&) = 0;
#else // @header-generator platform
    virtual void breakBlock(::FallingBlockActor& fallingBlock) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
