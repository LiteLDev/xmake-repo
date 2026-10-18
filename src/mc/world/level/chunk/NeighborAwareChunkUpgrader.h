#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/INeighborAwareChunkUpgrader.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class NeighborAwareChunkUpgrader : public ::INeighborAwareChunkUpgrader {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NeighborAwareChunkUpgrader();
#else // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType
    getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const;

    virtual void doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType, ::BlockSource&, ::Block const&, ::BlockPos const&) const;
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
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NeighborAwareBlockUpdateType $getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const;
#else // @header-generator platform
    MCAPI ::NeighborAwareBlockUpdateType
    $getUpdateType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType neighborAwareUpgradeVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType,
        ::BlockSource&,
        ::Block const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI void $doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType updateType,
        ::BlockSource&                 region,
        ::Block const&                 block,
        ::BlockPos const&              blockPos
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
