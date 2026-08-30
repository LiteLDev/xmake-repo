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
    // clang-format off
    virtual ~NeighborAwareChunkUpgrader();

    virtual ::NeighborAwareBlockUpdateType getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const;

    virtual void doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType, ::BlockSource&, ::Block const&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NeighborAwareBlockUpdateType $getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const;

    MCNAPI void $doLevelChunkNeighborAwareUpgrade(
        ::NeighborAwareBlockUpdateType,
        ::BlockSource&,
        ::Block const&,
        ::BlockPos const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
