#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBiomeType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class BiomeComponentFactory;
#else // @header-generator platform
#endif // @header-generator platform
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class SurfaceBuilderRegistry;
struct BiomeIdType;
struct BiomeJsonDocumentGlue;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
struct SpawnSettings;
// clang-format on

class VanillaBiomes {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initBiomeComponentGlue(::BiomeJsonDocumentGlue&);
#else // @header-generator platform
    MCAPI static void initBiomeComponentGlue(::BiomeJsonDocumentGlue& biomeJsonDocumentGlue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initBiomeComponents(::BiomeComponentFactory&);
#else // @header-generator platform
    MCAPI static void initBiomeDimensionComponent(::BiomeRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initBiomeDimensionComponent(::BiomeRegistry&);
#else // @header-generator platform
    MCAPI static void initBiomes(
        ::BiomeRegistry&         registry,
        ::SpawnSettings const&   spawnSettings,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    initBiomes(::BiomeRegistry&, ::SpawnSettings const&, ::BaseGameVersion const&, ::Experiments const&);
#else // @header-generator platform
    MCAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider& registries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider&);
#else // @header-generator platform
    MCAPI static void initSurfaceBuilders(::SurfaceBuilderRegistry& registry, ::BaseGameVersion const& baseGameVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initSurfaceBuilders(::SurfaceBuilderRegistry&, ::BaseGameVersion const&);

    MCNAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry&);

    MCNAPI static void shutdownBiomes();
#else // @header-generator platform
    MCAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::set<BiomeIdType>& mPlayerValidSpawns();
#else // @header-generator platform
    MCAPI static ::std::set<::BiomeIdType>& mPlayerValidSpawns();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SpawnBiomeType& mSpawnBiomeType();
#else // @header-generator platform
    MCAPI static ::SpawnBiomeType& mSpawnBiomeType();
#endif // @header-generator platform
    // NOLINTEND
};
