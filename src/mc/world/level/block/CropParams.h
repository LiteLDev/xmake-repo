#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct CropParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mSeedItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mSeedItem;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mGrowthPointsThreshold;
    ::ll::TypedStorage<4, 4, int>                 mMinGrowthLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMaxAge;
    ::ll::TypedStorage<4, 4, int>                 mMinSurvivalLightLevel;
    ::ll::TypedStorage<4, 4, int>                 mMinBonemealAgeIncrease;
    ::ll::TypedStorage<4, 4, int>                 mMaxBonemealAgeIncrease;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 24, std::string>        mGrowsIntoFeature;
    ::ll::TypedStorage<8, 24, std::string>        mPlacementSurface;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 32, ::std::string>      mGrowsIntoFeature;
    ::ll::TypedStorage<8, 32, ::std::string>      mPlacementSurface;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CropParams& operator=(CropParams const&);
    CropParams(CropParams const&);
    CropParams();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CropParams();
#else // @header-generator platform
    MCAPI ~CropParams();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
