#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class WorldGenClimateMappingAttributes : public ::BiomeComponentBase {
public:
    // WorldGenClimateMappingAttributes inner types declare
    // clang-format off
    struct WeightedTemperatureCategory;
    // clang-format on

    // WorldGenClimateMappingAttributes inner types define
    struct WeightedTemperatureCategory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::BiomeTemperatureCategory> mTemperature;
        ::ll::TypedStorage<4, 4, uint>                       mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<WorldGenClimateMappingAttributes::WeightedTemperatureCategory>> mClimateMappings;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldGenClimateMappingAttributes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
