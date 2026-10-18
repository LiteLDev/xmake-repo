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
class BiomeRegistry;
// clang-format on
#endif // @header-generator platform

namespace OperationNodeFilters {

#if defined(LL_PLAT_A) // @header-generator platform
struct RiverInit : public ::OperationNodeFilters::FilterBase<1, 1, int, const Biome*> {
#else // @header-generator platform
struct RiverInit : public ::OperationNodeFilters::FilterBase<1, 1, int, ::Biome const*> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Biome*>> mNoRiverBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mNoRiverBiomes;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    RiverInit();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit RiverInit(::BiomeRegistry const& biomeRegistry);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::BiomeRegistry const& biomeRegistry);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace OperationNodeFilters
