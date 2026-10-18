#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class INeighborAwareChunkUpgrader {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~INeighborAwareChunkUpgrader();
#else // @header-generator platform
    virtual ~INeighborAwareChunkUpgrader() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const = 0;
#else // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType
    getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType, ::BlockSource&, ::Block const&, ::BlockPos const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType updateType,
        ::BlockSource&                 region,
        ::Block const&                 block,
        ::BlockPos const&              blockPos
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
