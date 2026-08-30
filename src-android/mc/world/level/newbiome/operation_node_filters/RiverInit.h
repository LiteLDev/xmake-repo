#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

struct RiverInit : public ::OperationNodeFilters::FilterBase<1, 1, int, const Biome*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mNoRiverBiomes;
    // NOLINTEND
};

} // namespace OperationNodeFilters
