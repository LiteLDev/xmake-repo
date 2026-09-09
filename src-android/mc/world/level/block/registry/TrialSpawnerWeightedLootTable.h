#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrialSpawnerWeightedLootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          weight;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawnerWeightedLootTable();
};
