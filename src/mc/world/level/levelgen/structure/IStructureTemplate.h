#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class IStructureTemplate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructureTemplate() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const = 0;
#else // @header-generator platform
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos randomPosSeed) const = 0;
#endif // @header-generator platform

    virtual ::BlockPos rawSize() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const = 0;
#else // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const& block) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
