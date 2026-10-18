#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {
public:
    // ScatteredFeatureStart inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Type : uint {
        JUNGLE_PYRAMID = 0,
        SWAMPLAND_HUT  = 1,
        DESERT_PYRAMID = 2,
        IGLOO          = 3,
#else // @header-generator platform
    enum class Type : int {
        JunglePyramid = 0,
        SwamplandHut  = 1,
        DesertPyramid = 2,
        Igloo         = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RandomScatteredLargeFeatureDetails::ScatteredFeatureStart::Type> type;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMaxYSpawnOffset() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMaxYSpawnOffset() const;

    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace RandomScatteredLargeFeatureDetails
