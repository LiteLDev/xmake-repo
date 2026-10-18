#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

namespace OperationNodeFilters {

struct RemoveTooMuchOcean
#if defined(LL_PLAT_A) // @header-generator platform
: public ::OperationNodeFilters::FilterBase<3, 3, OperationNodeValues::Terrain, OperationNodeValues::Terrain> {};
#else // @header-generator platform
: public ::OperationNodeFilters::FilterBase<3, 3, ::OperationNodeValues::Terrain, ::OperationNodeValues::Terrain> {};
#endif // @header-generator platform

} // namespace OperationNodeFilters
