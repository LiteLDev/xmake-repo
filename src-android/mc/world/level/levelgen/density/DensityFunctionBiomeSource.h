#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class DensityFunctionRegistry;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct DensityFunctionPtr;
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
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Biome*>>                                     mBiome;
        ::ll::TypedStorage<8, 24, std::vector<DensityFunctionBiomeSource::BiomeTarget::ValueRange>> mRanges;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144>                                                    mCalculatorMutex;
    ::ll::TypedStorage<8, 24, std::vector<DensityCalculators>>                      mDensityCalculators;
    ::ll::TypedStorage<8, 24, std::vector<DensityFunctionBiomeSource::BiomeTarget>> mBiomeTargets;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityFunctionBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DensityFunctionBiomeSource() = default;

    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;

    virtual bool hasBiomeById(::BiomeIdType) const;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const;

    virtual ::BiomeSourceType const getType() const;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const;
    // clang-format on
    // NOLINTEND
};
