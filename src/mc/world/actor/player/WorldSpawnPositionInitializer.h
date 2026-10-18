#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class LevelData;
// clang-format on

namespace WorldSpawnPositionInitializer {
// functions
// NOLINTBEGIN
MCAPI void initializeSpawnPosition(::LevelData& levelData, ::DimensionManager& dimensionManager);
// NOLINTEND

} // namespace WorldSpawnPositionInitializer
#endif // @header-generator platform
