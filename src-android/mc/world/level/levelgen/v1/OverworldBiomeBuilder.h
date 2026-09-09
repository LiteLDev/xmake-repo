#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class Experiments;
struct BiomeNoiseTarget;
struct ClimateParameters;
// clang-format on

class OverworldBiomeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>             FROZEN_RANGE;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>             UNFROZEN_RANGE;
    ::ll::UntypedStorage<2, 20>                                            OCEANS_IDS;
    ::ll::UntypedStorage<2, 50>                                            MIDDLE_BIOMES_IDS;
    ::ll::UntypedStorage<2, 50>                                            MIDDLE_BIOMES_VARIANT_IDS;
    ::ll::UntypedStorage<2, 50>                                            PLATEAU_BIOMES_IDS;
    ::ll::UntypedStorage<2, 50>                                            PLATEAU_BIOMES_IDS_1_21_60;
    ::ll::UntypedStorage<2, 50>                                            PLATEAU_BIOMES_VARIANT_IDS;
    ::ll::UntypedStorage<2, 50>                                            PLATEAU_BIOMES_VARIANT_IDS_1_21_60;
    ::ll::UntypedStorage<2, 56>                                            EXTREME_HILLS_IDS;
    ::ll::TypedStorage<8, 8, ::BaseGameVersion const&>                     mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                         mExperiments;
    ::ll::TypedStorage<8, 80, std::array<std::array<const Biome*, 5>, 2>>  OCEANS;
    ::ll::TypedStorage<8, 200, std::array<std::array<const Biome*, 5>, 5>> MIDDLE_BIOMES;
    ::ll::TypedStorage<8, 200, std::array<std::array<const Biome*, 5>, 5>> MIDDLE_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, std::array<std::array<const Biome*, 5>, 5>> PLATEAU_BIOMES;
    ::ll::TypedStorage<8, 200, std::array<std::array<const Biome*, 5>, 5>> PLATEAU_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, std::array<std::array<const Biome*, 5>, 5>> EXTREME_HILLS;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _addHighSlice(std::vector<BiomeNoiseTarget>&, ::ClimateUtils::Parameter const&, ::BiomeRegistry const&) const;

    MCNAPI void
    _addLowSlice(std::vector<BiomeNoiseTarget>&, ::ClimateUtils::Parameter const&, ::BiomeRegistry const&) const;

    MCNAPI void
    _addMidSlice(std::vector<BiomeNoiseTarget>&, ::ClimateUtils::Parameter const&, ::BiomeRegistry const&) const;

    MCNAPI void
    _addPeaks(std::vector<BiomeNoiseTarget>&, ::ClimateUtils::Parameter const&, ::BiomeRegistry const&) const;

    MCNAPI void _addSurfaceBiome(
        std::vector<BiomeNoiseTarget>&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        float,
        ::Biome const*
    ) const;

    MCNAPI void _addUndergroundBiome(
        std::vector<BiomeNoiseTarget>&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        float,
        ::Biome const*
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[7]> EROSIONS();

    MCNAPI static ::ClimateUtils::Parameter const& FULL_RANGE();

    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[5]> HUMIDITIES();

    MCNAPI static float const& PEAK_END();

    MCNAPI static float const& PEAK_START();

    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[5]> TEMPERATURES();

    MCNAPI static ::ClimateUtils::Parameter const& coastContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& deepOceanContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& dripstoneCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& farInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& inlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& lushCavesHumidity();

    MCNAPI static ::ClimateUtils::Parameter const& midInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& mushroomFieldsContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& nearInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& oceanContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesErosion();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesWeirdness();
    // NOLINTEND
};
