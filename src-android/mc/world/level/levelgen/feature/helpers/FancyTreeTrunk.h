#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk : public ::ITreeTrunk {
public:
    // FancyTreeTrunk inner types declare
    // clang-format off
    class FoliageCoords;
    // clang-format on

    // FancyTreeTrunk inner types define
    class FoliageCoords : public ::BlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBranchBase;
        // NOLINTEND

    public:
        // prevent constructor by default
        FoliageCoords();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mBaseHeight;
    ::ll::TypedStorage<4, 4, int>                 mHeightVariance;
    ::ll::TypedStorage<4, 4, int>                 mTrunkWidth;
    ::ll::TypedStorage<4, 4, float>               mHeightScale;
    ::ll::TypedStorage<4, 4, float>               mBranchSlope;
    ::ll::TypedStorage<4, 4, float>               mBranchDensity;
    ::ll::TypedStorage<4, 4, float>               mBranchAltitudeFactor;
    ::ll::TypedStorage<4, 4, float>               mFoliageAltitudeFactor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, float>               mWidthScale;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FancyTreeTrunk();

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
