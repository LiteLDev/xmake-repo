#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/BlockDifference.h"
#include "mc/world/level/chunk/HeightDifference.h"

struct DeserializationChanges {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockDifference>> blockChangesMap;
    ::ll::TypedStorage<8, 24, std::vector<HeightDifference>>                 heightChanges;
    // NOLINTEND
};
