#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class GeodeFeature : public ::IFeature {
public:
    // GeodeFeature inner types define
    enum class BlockType : uchar {
        StandardSimple = 0,
        Standard       = 1,
        ExtraSimple    = 2,
        Extra          = 3,
        Count          = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mFiller;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mInnerLayer;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mAlternateInnerLayer;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mMiddleLayer;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mOuterLayer;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mInnerPlacements;
    ::ll::TypedStorage<4, 4, int>                           mMinOuterWallDistance;
    ::ll::TypedStorage<4, 4, int>                           mMaxOuterWallDistance;
    ::ll::TypedStorage<4, 4, int>                           mMinDistributionPoints;
    ::ll::TypedStorage<4, 4, int>                           mMaxDistributionPoints;
    ::ll::TypedStorage<4, 4, int>                           mMinPointOffset;
    ::ll::TypedStorage<4, 4, int>                           mMaxPointOffset;
    ::ll::TypedStorage<4, 4, int>                           mMaxRadius;
    ::ll::TypedStorage<4, 4, int>                           mCrackPointOffset;
    ::ll::TypedStorage<4, 4, float>                         mGenerateCrackChance;
    ::ll::TypedStorage<4, 4, float>                         mBaseCrackSize;
    ::ll::TypedStorage<4, 4, float>                         mNoiseMultiplier;
    ::ll::TypedStorage<4, 4, float>                         mUsePotentialPlacementsChance;
    ::ll::TypedStorage<4, 4, float>                         mUseAlternateLayer0Chance;
    ::ll::TypedStorage<1, 1, bool>                          mPlacementsRequireLayer0Alternate;
    ::ll::TypedStorage<4, 4, int>                           mInvalidBlocksThreshold;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeodeFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
