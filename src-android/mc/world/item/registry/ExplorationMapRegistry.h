#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated forward declare list
// clang-format off
struct ExplorationMapData;
// clang-format on

class ExplorationMapRegistry {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::array<ExplorationMapData, 11> const& _getRegistry();

    MCNAPI static ::ExplorationMapData const* getExplorationMapDataByMapType(::MapType);

    MCNAPI static bool isExplorationMap(::MapType);

    MCNAPI static bool isExplorationMapMarker(::MapDecoration::Type);
    // NOLINTEND
};
