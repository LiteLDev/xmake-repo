#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
#include "mc/world/level/levelgen/v1/chunk_blender_util/AttenuationData.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPos;
class ChunkPos;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
struct TerrainInfo;
// clang-format on

class ChunkBlender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::array<ChunkBlenderUtil::AttenuationData, 4>>> mChunkAttenuationData;
    ::ll::UntypedStorage<4, 8>                                                               mMinPos;
    ::ll::TypedStorage<2, 2, short const>                                                    mMinHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBlender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float attenuateDensity(::DividedPos2d<4> const&, int const, float const) const;

    MCNAPI ::TerrainInfo attenuateTerrainInfo(::DividedPos2d<4> const&, ::TerrainInfo const&) const;

    MCNAPI ::Biome const* tryGetAttenuatedBiome(
        ::DividedPos<4> const&,
        ::BiomeRegistry const&,
        ::NormalNoiseImpl<false, MultiOctaveNoiseImpl<false, ParityImprovedNoiseImpl<false>>> const&
    ) const;

    MCNAPI ::OverworldGeneratorMultinoise::BlockGenerationResult const
    tryMoveWaterEdges(::BlockPos const&, ::OverworldGeneratorMultinoise::BlockGenerationResult const) const;
    // NOLINTEND
};
