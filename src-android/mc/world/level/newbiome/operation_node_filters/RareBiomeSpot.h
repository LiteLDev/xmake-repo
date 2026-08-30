#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

class RareBiomeSpot : public ::OperationNodeFilters::FilterBase<1, 1, const Biome*, const Biome*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mChance;
    ::ll::TypedStorage<8, 8, ::Biome const*> mFromBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*> mToBiome;
    // NOLINTEND
};

} // namespace OperationNodeFilters
