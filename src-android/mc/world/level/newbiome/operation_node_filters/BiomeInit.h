#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#include "mc/world/level/newbiome/operation_node_values/PreBiome.h"

namespace OperationNodeFilters {

class BiomeInit : public ::OperationNodeFilters::FilterBase<1, 1, const Biome*, OperationNodeValues::PreBiome> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mFallbackBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mDefaultOcean;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mRegularBiomes;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mSpecialBiomes;
    // NOLINTEND
};

} // namespace OperationNodeFilters
