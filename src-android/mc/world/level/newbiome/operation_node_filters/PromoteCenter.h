#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

class PromoteCenter : public ::OperationNodeFilters::FilterBase<3, 3, const Biome*, const Biome*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*> mFrom;
    ::ll::TypedStorage<8, 8, ::Biome const*> mTo;
    // NOLINTEND
};

} // namespace OperationNodeFilters
