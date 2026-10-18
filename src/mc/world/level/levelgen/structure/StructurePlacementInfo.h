#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureBlockPlacementInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlacedConnectionBlock;
#else // @header-generator platform
class StructureBlockPlacementInfo;
#endif // @header-generator platform
struct StructurePlacementNeighbors;
// clang-format on

class StructurePlacementInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mOrigin;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                        mBlockVolume;
    ::ll::TypedStorage<8, 24, std::vector<StructureBlockPlacementInfo>> mBlockPlacementInfos;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                          mBlockVolume;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPlacementInfo>> mBlockPlacementInfos;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlacementInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePlacementInfo(::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI StructurePlacementInfo(::BlockPos const& size, ::BlockPos const& origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setBlockPlacementInfo(::BlockPos const&, ::StructureBlockPlacementInfo const&);
#else // @header-generator platform
    MCAPI uint _findOrInsertPlacementIndex(::StructureBlockPlacementInfo const& info);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureBlockPlacementInfo const& getBlockPlacementInfo(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::StructureBlockPlacementInfo const& getBlockPlacementInfo(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePlacementNeighbors getNeighbors(::BlockPos const&, ::Rotation);
#else // @header-generator platform
    MCAPI ::StructurePlacementNeighbors getNeighbors(::BlockPos const& relativePos, ::Rotation rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handlePostPlacedStructureForArea(
        ::BlockSource&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::Rotation,
        std::function<BlockPos(const BlockPos&)> const&,
        std::function<void(const BlockPos&, const BlockPos&)> const&
#else // @header-generator platform
    MCAPI void handlePostPlacedStructureForArea(
        ::BlockSource&                                                     region,
        ::BlockPos const&                                                  startPos,
        ::BlockPos const&                                                  endPos,
        ::Rotation                                                         rotation,
        ::std::function<::BlockPos(::BlockPos const&)> const&              getWorldPosition,
        ::std::function<void(::BlockPos const&, ::BlockPos const&)> const& preHandleBlock
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockPlacementInfo(::BlockPos const&, ::Block const&, ::NeighborAwareBlockUpdateType);
#else // @header-generator platform
    MCAPI void
    setBlockPlacementInfo(::BlockPos const& pos, ::Block const& block, ::NeighborAwareBlockUpdateType updateType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~StructurePlacementInfo();
#else // @header-generator platform
    MCAPI ~StructurePlacementInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& size, ::BlockPos const& origin);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
