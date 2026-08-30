#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CropArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mSeedItem;
    ::ll::TypedStorage<4, 4, float>                                   mGrowthPointsThreshold;
    ::ll::TypedStorage<4, 4, int>                                     mMinGrowthLightLevel;
    ::ll::TypedStorage<4, 4, int>                                     mMaxAge;
    ::ll::TypedStorage<4, 4, int>                                     mMinSurvivalLightLevel;
    ::ll::TypedStorage<4, 4, int>                                     mMinBonemealAgeIncrease;
    ::ll::TypedStorage<4, 4, int>                                     mMaxBonemealAgeIncrease;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor> mGrowsIntoBlock;
    ::ll::TypedStorage<8, 24, std::string>                            mGrowsIntoFeature;
    ::ll::TypedStorage<8, 24, std::string>                            mPlacementSurface;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
