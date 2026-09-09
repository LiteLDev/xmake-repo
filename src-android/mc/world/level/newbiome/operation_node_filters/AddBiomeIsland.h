#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

class AddBiomeIsland : public ::OperationNodeFilters::FilterBase<3, 3, const Biome*, const Biome*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>             mDefaultIsland;
    ::ll::TypedStorage<8, 8, ::Biome const*>             mSpecialIsland;
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mShallowOceanBiomes;
    // NOLINTEND
};

} // namespace OperationNodeFilters
