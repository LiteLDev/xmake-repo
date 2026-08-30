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
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>  mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, int>                  mBaseHeight;
    ::ll::TypedStorage<8, 24, std::vector<int>>    mHeightIntervals;
    ::ll::UntypedStorage<8, 24>                    mTreeTypeWeights;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchHorizontalLength;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchStartOffsetFromTop;
    ::ll::TypedStorage<4, 8, ::IntRange>           mBranchEndOffsetFromTop;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper> mBranchCanopy;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CherryTreeTrunk();

    virtual std::optional<BlockPos> placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*) const;

    virtual int getTreeHeight(::Random&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::ITreeCanopy const*
    ) const;

    MCNAPI int $getTreeHeight(::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
