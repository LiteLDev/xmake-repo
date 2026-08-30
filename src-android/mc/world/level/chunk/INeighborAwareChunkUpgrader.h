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
    // clang-format off
    virtual ~INeighborAwareChunkUpgrader();

    virtual ::NeighborAwareBlockUpdateType getUpdateType(::Block const&, ::NeighborAwareBlockUpgradeVersionType) const = 0;

    virtual void doLevelChunkNeighborAwareUpgrade(::NeighborAwareBlockUpdateType, ::BlockSource&, ::Block const&, ::BlockPos const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
