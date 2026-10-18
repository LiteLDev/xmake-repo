#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct BrewingStandInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> brewProgress;
    ::ll::TypedStorage<4, 4, float> fuelProgress;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BrewingStandInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> brewProgress;
    ::ll::TypedStorage<4, 4, float> fuelProgress;
    // NOLINTEND
};
#else // @header-generator platform
struct BrewingStandInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
