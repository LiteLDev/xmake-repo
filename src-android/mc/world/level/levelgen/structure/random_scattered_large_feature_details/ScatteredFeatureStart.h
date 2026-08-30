#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {
public:
    // ScatteredFeatureStart inner types define
    enum Type : uint {
        JUNGLE_PYRAMID = 0,
        SWAMPLAND_HUT  = 1,
        DESERT_PYRAMID = 2,
        IGLOO          = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RandomScatteredLargeFeatureDetails::ScatteredFeatureStart::Type> type;
    // NOLINTEND
};

} // namespace RandomScatteredLargeFeatureDetails
