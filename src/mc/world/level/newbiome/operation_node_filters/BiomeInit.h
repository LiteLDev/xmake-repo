#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#include "mc/world/level/GeneratorType.h"
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/newbiome/operation_node_values/PreBiome.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace OperationNodeValues { struct PreBiome; }
// clang-format on
#endif // @header-generator platform

namespace OperationNodeFilters {

#if defined(LL_PLAT_A) // @header-generator platform
class BiomeInit : public ::OperationNodeFilters::FilterBase<1, 1, const Biome*, OperationNodeValues::PreBiome> {
#else // @header-generator platform
class BiomeInit : public ::OperationNodeFilters::FilterBase<1, 1, ::Biome const*, ::OperationNodeValues::PreBiome> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mFallbackBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mDefaultOcean;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mRegularBiomes;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mSpecialBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mFallbackBiome;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mDefaultOcean;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mRegularBiomes;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mSpecialBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeInit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeInit(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BiomeRegistry const& registry,
        ::Biome const&         defaultOceanBiome,
        ::Biome const&         fallbackBiome,
        ::GeneratorType        generator
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace OperationNodeFilters
