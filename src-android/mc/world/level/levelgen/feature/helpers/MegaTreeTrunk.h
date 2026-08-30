#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopyWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mTrunkWidth;
    ::ll::TypedStorage<4, 4, int>                                  mBaseHeight;
    ::ll::TypedStorage<4, 4, int>                                  mBranchLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mBranchInterval;
    ::ll::TypedStorage<4, 4, float>                                mBranchSlope;
    ::ll::TypedStorage<4, 4, float>                                mMinBranchAltitudeFactor;
    ::ll::TypedStorage<4, 4, float>                                mMaxBranchAltitudeFactor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mTrunkBlockDescriptor;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper>                 mBranchCanopy;
    ::ll::TypedStorage<8, 216, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, std::vector<int>>                    mHeightIntervals;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MegaTreeTrunk();

    virtual std::optional<BlockPos> placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*) const;

    virtual int getTreeHeight(::Random&) const;
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
