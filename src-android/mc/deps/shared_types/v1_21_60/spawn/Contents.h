#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/spawn/BiomeConditions.h"
#include "mc/deps/shared_types/v1_21_60/spawn/Description.h"
#include "mc/deps/shared_types/v1_21_60/spawn/Placement.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::Spawn::Description>                mDescription;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_21_60::Spawn::Placement>>    mPlacement;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::BiomeConditions>> mBiomeConditions;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
