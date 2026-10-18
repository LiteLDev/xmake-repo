#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Biome;
#endif // @header-generator platform
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

#if defined(LL_PLAT_A) // @header-generator platform
struct AddMushroomIsland : public ::OperationNodeFilters::FilterBase<3, 3, const Biome*, const Biome*> {
#else // @header-generator platform
struct AddMushroomIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const&>         mMushroomBiome;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    AddMushroomIsland& operator=(AddMushroomIsland const&);
    AddMushroomIsland(AddMushroomIsland const&);
    AddMushroomIsland();
};

} // namespace OperationNodeFilters
