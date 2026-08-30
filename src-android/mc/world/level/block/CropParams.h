#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct CropParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mSeedItem;
    ::ll::TypedStorage<4, 4, float>               mGrowthPointsThreshold;
    ::ll::TypedStorage<4, 4, int>                 mMinGrowthLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMaxAge;
    ::ll::TypedStorage<4, 4, int>                 mMinSurvivalLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMinBonemealAgeIncrease;
    ::ll::TypedStorage<4, 4, int>                 mMaxBonemealAgeIncrease;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 24, std::string>        mGrowsIntoFeature;
    ::ll::TypedStorage<8, 24, std::string>        mPlacementSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    CropParams& operator=(CropParams const&);
    CropParams(CropParams const&);
    CropParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CropParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
