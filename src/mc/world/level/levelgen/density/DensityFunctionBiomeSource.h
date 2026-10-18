#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
#if defined(LL_PLAT_A) // @header-generator platform
class DensityFunctionRegistry;
#else // @header-generator platform
class DensityCalculators;
#endif // @header-generator platform
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
#if defined(LL_PLAT_A) // @header-generator platform
struct DensityFunctionPtr;
#else // @header-generator platform
#endif // @header-generator platform
struct GetBiomeOptions;
// clang-format on

class DensityFunctionBiomeSource : public ::BiomeSource {
public:
    // DensityFunctionBiomeSource inner types declare
    // clang-format off
    struct BiomeTarget;
    // clang-format on

    // DensityFunctionBiomeSource inner types define
    struct BiomeTarget {
    public:
        // BiomeTarget inner types declare
        // clang-format off
        struct ValueRange;
        // clang-format on

        // BiomeTarget inner types define
        struct ValueRange {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, float> mMin;
            ::ll::TypedStorage<4, 4, float> mMax;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Biome*>>                                     mBiome;
        ::ll::TypedStorage<8, 24, std::vector<DensityFunctionBiomeSource::BiomeTarget::ValueRange>> mRanges;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>>                                       mBiome;
        ::ll::TypedStorage<8, 24, ::std::vector<::DensityFunctionBiomeSource::BiomeTarget::ValueRange>> mRanges;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 144>                                                    mCalculatorMutex;
    ::ll::TypedStorage<8, 24, std::vector<DensityCalculators>>                      mDensityCalculators;
    ::ll::TypedStorage<8, 24, std::vector<DensityFunctionBiomeSource::BiomeTarget>> mBiomeTargets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                       mCalculatorMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::DensityCalculators>>                      mDensityCalculators;
    ::ll::TypedStorage<8, 24, ::std::vector<::DensityFunctionBiomeSource::BiomeTarget>> mBiomeTargets;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DensityFunctionBiomeSource();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DensityFunctionBiomeSource() = default;
#else // @header-generator platform
    virtual ~DensityFunctionBiomeSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<::Biome>
    getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;
#else // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const>) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType) const;
#else // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType) const;
#else // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSourceType const getType() const;
#else // @header-generator platform
    virtual ::BiomeSourceType const getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
