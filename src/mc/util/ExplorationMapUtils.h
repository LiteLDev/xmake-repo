#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
class Level;
struct ExplorationMapData;
// clang-format on

namespace ExplorationMapUtils {
// functions
// NOLINTBEGIN
MCNAPI void makeNewExplorationMapFromFeatureName(
    ::ItemStackBase&     item,
    ::Level&             level,
    ::Actor*             owner,
    ::std::string const& featureName,
    bool                 markForRegeneration
);

MCNAPI void makeNewExplorationMapFromMapData(
    ::ItemStackBase&            item,
    ::Level&                    level,
    ::Actor*                    owner,
    ::ExplorationMapData const& explorationMapData,
    bool                        markForRegeneration
);
// NOLINTEND

} // namespace ExplorationMapUtils
#endif // @header-generator platform
