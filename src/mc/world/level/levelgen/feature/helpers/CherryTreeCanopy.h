#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>  mLeavesBlockDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>  mLeavesBlockDescriptor;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>           mHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>           mRadius;
    ::ll::TypedStorage<4, 4, int>                  mTrunkWidth;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mWideBottomLayerHoleChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mCornerHoleChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mHangingLeavesChance;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mHangingLeavesExtensionChance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CherryTreeCanopy();
#else // @header-generator platform
    virtual ~CherryTreeCanopy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeCanopy(::IBlockWorldGenAPI&, ::BlockPos const&, ::ITreeCanopy::BranchSize const&, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const&, std::vector<BlockPos> const&, std::vector<ITreeCanopy::BranchSize> const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _placeLayerOfLeaves(
        ::IBlockWorldGenAPI&,
        ::Random&,
        ::BlockPos const&,
        int,
        ::Block const&,
        int,
        ::TreeHelper::TreeParams const&
#else // @header-generator platform
    MCAPI void _placeLayerOfLeaves(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               canopyPos,
        int                             layerOffset,
        ::Block const&                  leavesBlock,
        int                             radius,
        ::TreeHelper::TreeParams const& treeParams
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _placeLayerOfLeavesWithHangingLeavesBelow(
        ::IBlockWorldGenAPI&,
        ::Random&,
        ::BlockPos const&,
        int,
        ::Block const&,
        int,
        ::TreeHelper::TreeParams const&
#else // @header-generator platform
    MCAPI void _placeLayerOfLeavesWithHangingLeavesBelow(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               canopyPos,
        int                             layerOffset,
        ::Block const&                  leavesBlock,
        int                             radius,
        ::TreeHelper::TreeParams const& treeParams
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::ITreeCanopy::BranchSize const&,
        ::Random&,
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
#endif // @header-generator platform
        ::RenderParams&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::TreeHelper::TreeParams const&,
        std::vector<BlockPos> const&,
        std::vector<ITreeCanopy::BranchSize> const&
#else // @header-generator platform
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
