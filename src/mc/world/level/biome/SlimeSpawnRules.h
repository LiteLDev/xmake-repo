#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SpawnConditions;
// clang-format on

namespace SlimeSpawnRules {
// functions
// NOLINTBEGIN
MCAPI bool checkSpawnRulesCallback(::SpawnConditions const& conditions, ::BlockSource& region);
// NOLINTEND

} // namespace SlimeSpawnRules
#endif // @header-generator platform
