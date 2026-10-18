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
#if defined(LL_PLAT_A) // @header-generator platform
struct ClimateParameters;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class OverworldBiomeBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>                   FROZEN_RANGE;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>                   UNFROZEN_RANGE;
    ::ll::TypedStorage<2, 20, ::BiomeIdType[2][5]>                               OCEANS_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               MIDDLE_BIOMES_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               MIDDLE_BIOMES_VARIANT_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_IDS_1_21_60;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_VARIANT_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_VARIANT_IDS_1_21_60;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               EXTREME_HILLS_IDS;
    ::ll::TypedStorage<8, 8, ::BaseGameVersion const&>                           mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                               mExperiments;
    ::ll::TypedStorage<8, 80, ::std::array<::std::array<::Biome const*, 5>, 2>>  OCEANS;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> MIDDLE_BIOMES;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> MIDDLE_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> PLATEAU_BIOMES;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> PLATEAU_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> EXTREME_HILLS;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _addHighSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addUndergroundBiome(
        std::vector<BiomeNoiseTarget>&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        ::ClimateUtils::Parameter const&,
        float,
        ::Biome const*
#else // @header-generator platform
    MCAPI void _addLowSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI void _addMidSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addPeaks(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addSurfaceBiome(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   temperature,
        ::ClimateUtils::Parameter const&   humidity,
        ::ClimateUtils::Parameter const&   continentalness,
        ::ClimateUtils::Parameter const&   erosion,
        ::ClimateUtils::Parameter const&   weirdness,
        float                              offset,
        ::Biome const*                     second
    ) const;

    MCAPI void _populateBiomeArrays(::BiomeRegistry const& biomeRegistry) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[7]> EROSIONS();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> EROSIONS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& FULL_RANGE();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& FULL_RANGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[5]> HUMIDITIES();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> HUMIDITIES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& PEAK_END();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> TEMPERATURES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& PEAK_START();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& coastContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[5]> TEMPERATURES();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& deepOceanContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& coastContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& dripstoneCavesContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& deepOceanContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& farInlandContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& dripstoneCavesContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& inlandContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& farInlandContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& lushCavesHumidity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& inlandContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& midInlandContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& lushCavesHumidity();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& mushroomFieldsContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& midInlandContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& nearInlandContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& mushroomFieldsContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& oceanContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& nearInlandContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesContinentalness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& oceanContinentalness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesErosion();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesErosion();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesWeirdness();
#else // @header-generator platform
    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesWeirdness();
#endif // @header-generator platform
    // NOLINTEND
};
