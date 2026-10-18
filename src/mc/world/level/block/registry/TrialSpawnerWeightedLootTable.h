#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrialSpawnerWeightedLootTable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          weight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<4, 4, int>            weight;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TrialSpawnerWeightedLootTable();
#else // @header-generator platform
#endif // @header-generator platform
};
