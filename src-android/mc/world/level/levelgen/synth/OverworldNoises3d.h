#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/biome/TerrainShaper.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Pos2d;
class XoroshiroPositionalRandomFactory;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
struct TargetPoint;
struct TerrainInfo;
// clang-format on

struct OverworldNoises3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                       mTemperatureNoise;
    ::ll::UntypedStorage<8, 56>                       mHumidityNoise;
    ::ll::UntypedStorage<8, 56>                       mContinentalnessNoise;
    ::ll::UntypedStorage<8, 56>                       mErosionNoise;
    ::ll::UntypedStorage<8, 56>                       mWeirdnessNoise;
    ::ll::UntypedStorage<8, 56>                       mOffsetNoise;
    ::ll::UntypedStorage<8, 56>                       mJaggedNoise;
    ::ll::TypedStorage<8, 464, ::TerrainShaper const> mTerrainShaper;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldNoises3d();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const&) const;

    MCNAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const&) const;

    MCNAPI ::TerrainInfo computeOffsetAndFactor(::DividedPos2d<4> const&) const;

    MCNAPI ::TargetPoint sample(::BlockPos) const;

    MCNAPI ::TargetPoint sample(int, ::ChunkLocalNoiseCache::CacheEntry const&) const;

    MCNAPI ~OverworldNoises3d();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float computeInitialDensity(int, float, float, float);

    MCNAPI static ::OverworldNoises3d make(::XoroshiroPositionalRandomFactory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
