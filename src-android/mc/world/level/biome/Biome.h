#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/WeightedRandomList.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/OceanRuinConfiguration.h"
#include "mc/world/level/biome/components/BiomeComponentStorage.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/v2/SpawnerData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
class MobSpawnerData;
struct BiomeHashType;
struct BiomeHeight;
namespace EAS { class IEnvironmentAttribute; }
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types define
    enum class BiomeTempCategory : int {
        OCEAN  = 0,
        COLD   = 1,
        MEDIUM = 2,
        WARM   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
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
    ::ll::TypedStorage<8, 32, ::BiomeComponentStorage> mBiomeComponentStorage;
    ::ll::TypedStorage<8, 40, ::HashedString const> mHash;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::unique_ptr<EAS::IEnvironmentAttribute>, std::less<void>, std::allocator<std::pair<const std::string, std::unique_ptr<EAS::IEnvironmentAttribute>>>>> mEnvironmentAttributes;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Biome();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Biome();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Biome(::BiomeIdType, std::string_view);

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildCachedTemperatureNoise(::LevelChunk&);

    MCNAPI static ::mce::Color getColorBySamplingSurroundings(
        ::BlockSource&,
        ::BlockPos const&,
        std::vector<BlockPos> const&,
        ::gsl::not_null<int (*)(const Biome&, const BlockPos&)> const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeIdType, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
