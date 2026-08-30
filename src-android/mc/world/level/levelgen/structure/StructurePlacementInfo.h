#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/StructureBlockPlacementInfo.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
struct PlacedConnectionBlock;
struct StructurePlacementNeighbors;
// clang-format on

class StructurePlacementInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mOrigin;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                        mBlockVolume;
    ::ll::TypedStorage<8, 24, std::vector<StructureBlockPlacementInfo>> mBlockPlacementInfos;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlacementInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePlacementInfo(::BlockPos const&, ::BlockPos const&);

    MCNAPI void _setBlockPlacementInfo(::BlockPos const&, ::StructureBlockPlacementInfo const&);

    MCNAPI ::StructureBlockPlacementInfo const& getBlockPlacementInfo(::BlockPos const&) const;

    MCNAPI ::StructurePlacementNeighbors getNeighbors(::BlockPos const&, ::Rotation);

    MCNAPI void handlePostPlacedStructureForArea(
        ::BlockSource&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::Rotation,
        std::function<BlockPos(const BlockPos&)> const&,
        std::function<void(const BlockPos&, const BlockPos&)> const&
    );

    MCNAPI void setBlockPlacementInfo(::BlockPos const&, ::Block const&, ::NeighborAwareBlockUpdateType);

    MCNAPI ~StructurePlacementInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
