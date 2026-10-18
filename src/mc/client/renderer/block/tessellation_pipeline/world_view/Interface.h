#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline::WorldView { struct LocalInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline::WorldView {

#if defined(LL_PLAT_A) // @header-generator platform
class Interface {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Interface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Interface() = default;

    virtual ::ClientBlockPipeline::WorldView::LocalInfo getLocalInfo(::BlockPos const& relativePos) const = 0;

    virtual ::Block const& getBlock(::BlockPos const& relativePos) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const& relativePos) const = 0;

    virtual ::BlockActor const* getBlockActor(::BlockPos const& relativePos) const = 0;

    virtual void offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea& localArea) const = 0;

    virtual ::BlockPos getRelativeMin(::BlockPos const& worldMin) const = 0;

    virtual ::BlockPos getRelativeMax(::BlockPos const& worldMin) const = 0;

    virtual bool isInBounds(::BlockPos const& relativePos, ::BlockPos const& dimensions) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class Interface {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::WorldView
