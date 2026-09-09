#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/spawn/BiomeConditions.h"
#include "mc/deps/shared_types/legacy/spawn/Description.h"

namespace SharedTypes::Legacy::Spawn {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::Spawn::Description>                mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::Spawn::BiomeConditions>> mBiomeConditions;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
