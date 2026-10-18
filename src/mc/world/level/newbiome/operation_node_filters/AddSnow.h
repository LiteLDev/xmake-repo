#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/newbiome/operation_node_values/PreBiome.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { struct PreBiome; }
// clang-format on
#endif // @header-generator platform

namespace OperationNodeFilters {

struct AddSnow
#if defined(LL_PLAT_A) // @header-generator platform
: public ::OperationNodeFilters::FilterBase<1, 1, OperationNodeValues::PreBiome, OperationNodeValues::Terrain> {};
#else // @header-generator platform
: public ::OperationNodeFilters::FilterBase<1, 1, ::OperationNodeValues::PreBiome, ::OperationNodeValues::Terrain> {};
#endif // @header-generator platform

} // namespace OperationNodeFilters
