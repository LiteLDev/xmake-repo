#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_21_60/spawn/Herd.h"
#include "mc/deps/shared_types/v1_21_60/spawn/PermuteType.h"

namespace SharedTypes::v1_21_60::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mWeight;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::Herd>>        mHerds;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::PermuteType>> mPermuteType;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>              mBiomeFilter;
    ::ll::TypedStorage<8, 24, std::string>                                            mMobEvent;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
