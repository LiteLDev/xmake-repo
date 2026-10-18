#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ExplorationMapData;
// clang-format on

class ExplorationMapRegistry {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<ExplorationMapData, 11> const& _getRegistry();
#else // @header-generator platform
    MCAPI static ::std::array<::ExplorationMapData, 11> const& _getRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ExplorationMapData const* getExplorationMapDataByMapType(::MapType);

    MCNAPI static bool isExplorationMap(::MapType);

    MCNAPI static bool isExplorationMapMarker(::MapDecoration::Type);
#else // @header-generator platform
    MCAPI static ::ExplorationMapData const* getExplorationMapDataByFeatureName(::std::string const& featureName);
#endif // @header-generator platform
    // NOLINTEND
};
