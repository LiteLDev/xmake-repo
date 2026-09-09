#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"
#include "mc/world/level/biome/MobSpawnRules.h"

struct ActorSpawnConditionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSpawnWeight;
    ::ll::UntypedStorage<8, 72>   mBiomeFilter;
    ::ll::UntypedStorage<8, 368>  mSpawnCondition;
    // NOLINTEND
};
