#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class PoplarTreeCanopy : public ::ITreeCanopy {
public:
    // PoplarTreeCanopy inner types declare
    // clang-format off
    struct WeightedInt;
    // clang-format on

    // PoplarTreeCanopy inner types define
    struct WeightedInt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk2aba3e;
        ::ll::UntypedStorage<4, 4> mUnk46103b;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedInt& operator=(WeightedInt const&);
        WeightedInt(WeightedInt const&);
        WeightedInt();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk39d4af;
    ::ll::UntypedStorage<8, 176> mUnke5b0bb;
    ::ll::UntypedStorage<8, 24>  mUnkb07ea5;
    ::ll::UntypedStorage<4, 8>   mUnk3a16db;
    ::ll::UntypedStorage<4, 4>   mUnk46e11f;
    ::ll::UntypedStorage<4, 4>   mUnkd38a92;
    // NOLINTEND

public:
    // prevent constructor by default
    PoplarTreeCanopy& operator=(PoplarTreeCanopy const&);
    PoplarTreeCanopy(PoplarTreeCanopy const&);
    PoplarTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                origin,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _placeLayerOfLeaves(
        ::IBlockWorldGenAPI&            target,
        ::Block const&                  leavesBlock,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos const&               origin,
        ::Random&                       random,
        int                             foliageHeight,
        int                             currentRadius,
        int                             y,
        bool                            flipRhombusShape,
        bool                            isDoubleTrunk
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                origin,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const;


    // NOLINTEND
};
