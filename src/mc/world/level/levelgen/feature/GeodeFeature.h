#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mFiller;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mInnerLayer;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mAlternateInnerLayer;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mMiddleLayer;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mOuterLayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mInnerPlacements;
    ::ll::TypedStorage<4, 4, int>                               mMinOuterWallDistance;
    ::ll::TypedStorage<4, 4, int>                               mMaxOuterWallDistance;
    ::ll::TypedStorage<4, 4, int>                               mMinDistributionPoints;
    ::ll::TypedStorage<4, 4, int>                               mMaxDistributionPoints;
    ::ll::TypedStorage<4, 4, int>                               mMinPointOffset;
    ::ll::TypedStorage<4, 4, int>                               mMaxPointOffset;
    ::ll::TypedStorage<4, 4, int>                               mMaxRadius;
    ::ll::TypedStorage<4, 4, int>                               mCrackPointOffset;
    ::ll::TypedStorage<4, 4, float>                             mGenerateCrackChance;
    ::ll::TypedStorage<4, 4, float>                             mBaseCrackSize;
    ::ll::TypedStorage<4, 4, float>                             mNoiseMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mUsePotentialPlacementsChance;
    ::ll::TypedStorage<4, 4, float>                             mUseAlternateLayer0Chance;
    ::ll::TypedStorage<1, 1, bool>                              mPlacementsRequireLayer0Alternate;
    ::ll::TypedStorage<4, 4, int>                               mInvalidBlocksThreshold;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GeodeFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
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
