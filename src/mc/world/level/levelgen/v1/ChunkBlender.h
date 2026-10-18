#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
#include "mc/world/level/levelgen/v1/chunk_blender_util/AttenuationData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class ChunkPos;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
#else // @header-generator platform
#endif // @header-generator platform
struct TerrainInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ChunkBlenderUtil { struct AttenuationData; }
#endif // @header-generator platform
// clang-format on

class ChunkBlender {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::array<ChunkBlenderUtil::AttenuationData, 4>>> mChunkAttenuationData;
    ::ll::UntypedStorage<4, 8>                                                               mMinPos;
    ::ll::TypedStorage<2, 2, short const>                                                    mMinHeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::array<::ChunkBlenderUtil::AttenuationData, 4>>>
                                                      mChunkAttenuationData;
    ::ll::TypedStorage<4, 8, ::DividedPos2d<4> const> mMinPos;
    ::ll::TypedStorage<2, 2, short const>             mMinHeight;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChunkBlender();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float attenuateDensity(::DividedPos2d<4> const&, int const, float const) const;
#else // @header-generator platform
    MCAPI ::TerrainInfo
    attenuateTerrainInfo(::DividedPos2d<4> const& worldQuartPos, ::TerrainInfo const& defaultTerrainInfo) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TerrainInfo attenuateTerrainInfo(::DividedPos2d<4> const&, ::TerrainInfo const&) const;

    MCNAPI ::Biome const* tryGetAttenuatedBiome(
        ::DividedPos<4> const&,
        ::BiomeRegistry const&,
        ::NormalNoiseImpl<false, MultiOctaveNoiseImpl<false, ParityImprovedNoiseImpl<false>>> const&
#else // @header-generator platform
    MCAPI ::Biome const* tryGetAttenuatedBiome(
        ::DividedPos<4> const&                                                               worldQuartPos,
        ::BiomeRegistry const&                                                               biomeRegistry,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const& shiftNoise
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ::OverworldGeneratorMultinoise::BlockGenerationResult const
    tryMoveWaterEdges(::BlockPos const&, ::OverworldGeneratorMultinoise::BlockGenerationResult const) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
