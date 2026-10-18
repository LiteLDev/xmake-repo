#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GrowingPlantFeature : public ::IFeature {
public:
    // GrowingPlantFeature inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WeightedRandomNumberReference;
#else // @header-generator platform
#endif // @header-generator platform
    struct WeightedBlockReference;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WeightedRandomNumberReference;
#endif // @header-generator platform
    // clang-format on

    // GrowingPlantFeature inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> mBlockDescriptor;
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct WeightedRandomNumberReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::IntRange> mRandomNumber;
        ::ll::TypedStorage<4, 4, float>      mWeight;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlockDescriptor;
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GrowingPlantFeature::WeightedRandomNumberReference>> mHeightDistribution;
    ::ll::TypedStorage<1, 1, uchar>                                                            mGrowthDirection;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                       mAge;
    ::ll::TypedStorage<8, 24, std::vector<GrowingPlantFeature::WeightedBlockReference>>        mBodyBlocks;
    ::ll::TypedStorage<8, 24, std::vector<GrowingPlantFeature::WeightedBlockReference>>        mHeadBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                             mAllowWater;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedRandomNumberReference>> mHeightDistribution;
    ::ll::TypedStorage<1, 1, uchar>                                                                mGrowthDirection;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                           mAge;
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedBlockReference>>        mBodyBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::GrowingPlantFeature::WeightedBlockReference>>        mHeadBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                                 mAllowWater;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GrowingPlantFeature();
#else // @header-generator platform
    virtual ~GrowingPlantFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrowingPlantFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
