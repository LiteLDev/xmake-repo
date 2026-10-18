#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

namespace OperationNodeFilters {

struct AddOceanEdge
#if defined(LL_PLAT_A) // @header-generator platform
: public ::OperationNodeFilters::FilterBase<3, 3, BiomeTemperatureCategory, BiomeTemperatureCategory> {};
#else // @header-generator platform
: public ::OperationNodeFilters::FilterBase<3, 3, ::BiomeTemperatureCategory, ::BiomeTemperatureCategory> {};
#endif // @header-generator platform

} // namespace OperationNodeFilters
