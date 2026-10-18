#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on
#endif // @header-generator platform

namespace OperationNodeFilters {

#if defined(LL_PLAT_A) // @header-generator platform
class PromoteCenter : public ::OperationNodeFilters::FilterBase<3, 3, const Biome*, const Biome*> {
#else // @header-generator platform
class PromoteCenter : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*> mFrom;
    ::ll::TypedStorage<8, 8, ::Biome const*> mTo;
    // NOLINTEND
};

} // namespace OperationNodeFilters
