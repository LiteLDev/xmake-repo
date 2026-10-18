#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/util/WeightedRandom.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopyWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>  mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, int>                  mBaseHeight;
    ::ll::TypedStorage<8, 24, std::vector<int>>    mHeightIntervals;
    ::ll::UntypedStorage<8, 24>                    mTreeTypeWeights;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchHorizontalLength;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchStartOffsetFromTop;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchEndOffsetFromTop;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper> mBranchCanopy;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                                 mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, int>                                                 mBaseHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                 mHeightIntervals;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeightedRandom::WeighedRandomItem>> mTreeTypeWeights;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchHorizontalLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchStartOffsetFromTop;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mBranchEndOffsetFromTop;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper>                                mBranchCanopy;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CherryTreeTrunk();
#else // @header-generator platform
    virtual ~CherryTreeTrunk() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*) const;
#else // @header-generator platform
    virtual int getTreeHeight(::Random& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTreeHeight(::Random&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos _generateBranch(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::Random&,
        int,
        ::BlockPos,
        ::TreeHelper::TreeParams const&,
        ::BlockPos,
        int,
        bool
#else // @header-generator platform
    MCAPI ::BlockPos _generateBranch(
        ::IBlockWorldGenAPI&            target,
        ::Block const&                  trunkBlock,
        ::Block const&                  sidewaysTrunkBlock,
        ::Random&                       random,
        int                             treeHeight,
        ::BlockPos                      origin,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos                      branchDirection,
        int                             offsetFromOrigin,
        bool                            middleContinuesUpwards
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
    MCNAPI std::optional<BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::ITreeCanopy const*
#else // @header-generator platform
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getTreeHeight(::Random&) const;
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
