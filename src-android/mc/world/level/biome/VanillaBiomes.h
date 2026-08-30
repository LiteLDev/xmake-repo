#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBiomeType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeComponentFactory;
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class SurfaceBuilderRegistry;
struct BiomeIdType;
struct BiomeJsonDocumentGlue;
struct DimensionType;
struct SpawnSettings;
// clang-format on

class VanillaBiomes {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initBiomeComponentGlue(::BiomeJsonDocumentGlue&);

    MCNAPI static void initBiomeComponents(::BiomeComponentFactory&);

    MCNAPI static void initBiomeDimensionComponent(::BiomeRegistry&);

    MCNAPI static void
    initBiomes(::BiomeRegistry&, ::SpawnSettings const&, ::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider&);

    MCNAPI static void initSurfaceBuilders(::SurfaceBuilderRegistry&, ::BaseGameVersion const&);

    MCNAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry&);

    MCNAPI static void shutdownBiomes();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::set<BiomeIdType>& mPlayerValidSpawns();

    MCNAPI static ::SpawnBiomeType& mSpawnBiomeType();
    // NOLINTEND
};
