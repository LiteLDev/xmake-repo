#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/WeightedRandomList.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/OceanRuinConfiguration.h"
#include "mc/world/level/biome/components/BiomeComponentStorage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/v2/SpawnerData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
class MobSpawnerData;
#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeHashType;
struct BiomeHeight;
#else // @header-generator platform
#endif // @header-generator platform
namespace EAS { class IEnvironmentAttribute; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { struct SpawnerData; }
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types define
    enum class BiomeTempCategory : int {
#if defined(LL_PLAT_A) // @header-generator platform
        OCEAN  = 0,
        COLD   = 1,
        MEDIUM = 2,
        WARM   = 3,
#else // @header-generator platform
        Ocean  = 0,
        Cold   = 1,
        Medium = 2,
        Warm   = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mDownfall;
    ::ll::TypedStorage<4, 4, float> mRedSporeDensity;
    ::ll::TypedStorage<4, 4, float> mBlueSporeDensity;
    ::ll::TypedStorage<4, 4, float> mAshDensity;
    ::ll::TypedStorage<4, 4, float> mWhiteAshDensity;
    ::ll::TypedStorage<4, 4, float> mSnowAccumulation;
    ::ll::TypedStorage<4, 4, float> mFoliageSnow;
    ::ll::TypedStorage<4, 4, float> mMinSnowLevel;
    ::ll::TypedStorage<4, 4, float> mMaxSnowLevel;
    ::ll::TypedStorage<4, 4, float> mDepth;
    ::ll::TypedStorage<4, 4, float> mScale;
    ::ll::TypedStorage<4, 4, int> mMapWaterColor;
    ::ll::TypedStorage<4, 4, float const> mMapWaterTransparency;
    ::ll::TypedStorage<1, 1, bool> mRain;
    ::ll::TypedStorage<4, 12, ::OceanRuinConfiguration> mOceanRuinConfig;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<MobSpawnerData>>> mMobs;
    ::ll::UntypedStorage<8, 256> mMobsMap;
    ::ll::UntypedStorage<2, 2> mId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                               mTemperature;
    ::ll::TypedStorage<4, 4, float>                                               mDownfall;
    ::ll::TypedStorage<4, 4, float>                                               mRedSporeDensity;
    ::ll::TypedStorage<4, 4, float>                                               mBlueSporeDensity;
    ::ll::TypedStorage<4, 4, float>                                               mAshDensity;
    ::ll::TypedStorage<4, 4, float>                                               mWhiteAshDensity;
    ::ll::TypedStorage<4, 4, float>                                               mSnowAccumulation;
    ::ll::TypedStorage<4, 4, float>                                               mFoliageSnow;
    ::ll::TypedStorage<4, 4, float>                                               mMinSnowLevel;
    ::ll::TypedStorage<4, 4, float>                                               mMaxSnowLevel;
    ::ll::TypedStorage<4, 4, float>                                               mDepth;
    ::ll::TypedStorage<4, 4, float>                                               mScale;
    ::ll::TypedStorage<4, 4, int>                                                 mMapWaterColor;
    ::ll::TypedStorage<4, 4, float const>                                         mMapWaterTransparency;
    ::ll::TypedStorage<1, 1, bool>                                                mRain;
    ::ll::TypedStorage<4, 12, ::OceanRuinConfiguration>                           mOceanRuinConfig;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MobSpawnerData>>> mMobs;
    ::ll::TypedStorage<8, 256, ::std::array<::WeightedRandomList<::br::worldgen::SpawnerData>, 8>> mMobsMap;
    ::ll::TypedStorage<2, 2, ::BiomeIdType const>                                                  mId;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BiomeComponentStorage> mBiomeComponentStorage;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString const> mHash;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::unique_ptr<EAS::IEnvironmentAttribute>, std::less<void>, std::allocator<std::pair<const std::string, std::unique_ptr<EAS::IEnvironmentAttribute>>>>> mEnvironmentAttributes;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString const>    mHash;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::unique_ptr<::EAS::IEnvironmentAttribute>, ::std::less<void>>>
        mEnvironmentAttributes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Biome();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Biome();
#else // @header-generator platform
    virtual ~Biome() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Biome(::BiomeIdType, std::string_view);
#else // @header-generator platform
    MCAPI Biome(::BiomeIdType id, ::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canHaveSnowfall(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI ::VanillaBiomeTypes getBiomeType() const;

    MCNAPI float getDefaultBiomeTemperature() const;

    MCNAPI float getDownfall() const;

    MCNAPI std::array<WeightedRandomList<br::worldgen::SpawnerData>, 8>& getMobMapMutable();

    MCNAPI std::vector<std::shared_ptr<MobSpawnerData>> const& getMobs() const;

    MCNAPI std::vector<std::shared_ptr<MobSpawnerData>>& getMobsMutable();

    MCNAPI int getSnowAccumulationLayers() const;

    MCNAPI float getTemperature(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI ::Biome::BiomeTempCategory getTemperatureCategory() const;

    MCNAPI float getTemperatureWorldGen(::BlockPos const&, short) const;

    MCNAPI bool isHumid() const;

    MCNAPI bool isSnowCovered() const;

    MCNAPI ::Biome& setDepthAndScale(::BiomeHeight const&);

    MCNAPI ::Biome& setMapWaterColor(int);

    MCNAPI ::Biome& setNoRain();

    MCNAPI ::Biome& setOceanRuinConfig(::OceanRuinConfiguration const&);

    MCNAPI ::Biome& setSnowAccumulation(float, float);

    MCNAPI ::Biome& setTemperatureAndDownfall(float, float);
#else // @header-generator platform
    MCAPI float getTemperature(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void buildCachedTemperatureNoise(::LevelChunk&);
#else // @header-generator platform
    MCAPI static void buildCachedTemperatureNoise(::LevelChunk& chunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color getColorBySamplingSurroundings(
        ::BlockSource&,
        ::BlockPos const&,
        std::vector<BlockPos> const&,
        ::gsl::not_null<int (*)(const Biome&, const BlockPos&)> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::mce::Color getColorBySamplingSurroundings(
        ::BlockSource&                                                     region,
        ::BlockPos const&                                                  pos,
        ::std::vector<::BlockPos> const&                                   pattern,
        ::gsl::not_null<int (*)(::Biome const&, ::BlockPos const&)> const& sampler
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color const& BIRCH_FOLIAGE_TINT();

    MCNAPI static ::mce::Color const& DEFAULT_FOLIAGE_TINT();

    MCNAPI static ::mce::Color const& DEFAULT_GRASS_TINT();

    MCNAPI static ::mce::Color const& DEFAULT_UNDERWATER_COLOR();

    MCNAPI static ::mce::Color const& DEFAULT_WATER_COLOR();

    MCNAPI static ::mce::Color const& DEFAULT_WATER_TINT();

    MCNAPI static ::mce::Color const& DRY_FOLIAGE_TINT();

    MCNAPI static ::mce::Color const& EVERGREEN_FOLIAGE_TINT();

    MCNAPI static ::BiomeHeight const& HEIGHTS_DEFAULT();

    MCNAPI static int const& INT_DEFAULT_WATER_COLOR();

    MCNAPI static float const& RAIN_TEMP_THRESHOLD();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::mce::Color const& BIRCH_FOLIAGE_TINT();

    MCAPI static ::mce::Color const& DEFAULT_FOLIAGE_TINT();

    MCAPI static ::mce::Color const& DEFAULT_GRASS_TINT();

    MCAPI static ::mce::Color const& DEFAULT_WATER_COLOR();

    MCAPI static ::mce::Color const& DEFAULT_WATER_TINT();

    MCAPI static ::mce::Color const& DRY_FOLIAGE_TINT();

    MCAPI static ::mce::Color const& EVERGREEN_FOLIAGE_TINT();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BiomeIdType, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BiomeIdType id, ::std::string_view name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
