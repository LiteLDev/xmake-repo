#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/DividedPos.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/biome/TerrainShaper.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class Pos2d;
#else // @header-generator platform
#endif // @header-generator platform
class XoroshiroPositionalRandomFactory;
#if defined(LL_PLAT_A) // @header-generator platform
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
#else // @header-generator platform
#endif // @header-generator platform
struct TargetPoint;
struct TerrainInfo;
// clang-format on

struct OverworldNoises3d {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 56>                       mTemperatureNoise;
    ::ll::UntypedStorage<8, 56>                       mHumidityNoise;
    ::ll::UntypedStorage<8, 56>                       mContinentalnessNoise;
    ::ll::UntypedStorage<8, 56>                       mErosionNoise;
    ::ll::UntypedStorage<8, 56>                       mWeirdnessNoise;
    ::ll::UntypedStorage<8, 56>                       mOffsetNoise;
    ::ll::UntypedStorage<8, 56>                       mJaggedNoise;
    ::ll::TypedStorage<8, 464, ::TerrainShaper const> mTerrainShaper;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mTemperatureNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mHumidityNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mContinentalnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mErosionNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mWeirdnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mOffsetNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
                                                      mJaggedNoise;
    ::ll::TypedStorage<8, 512, ::TerrainShaper const> mTerrainShaper;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    OverworldNoises3d();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    OverworldNoises3d& operator=(OverworldNoises3d const&);
    OverworldNoises3d(OverworldNoises3d const&);
    OverworldNoises3d();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI OverworldNoises3d(::OverworldNoises3d&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const&) const;
#else // @header-generator platform
    MCAPI ::ChunkLocalNoiseCache::CacheEntry
    _computeBaseValueSetForCacheEntry(::DividedPos2d<4> const& worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TerrainInfo computeOffsetAndFactor(::DividedPos2d<4> const&) const;
#else // @header-generator platform
    MCAPI ::ChunkLocalNoiseCache::CacheEntry computeNoiseValues(::DividedPos2d<4> const& worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TargetPoint sample(::BlockPos) const;
#else // @header-generator platform
    MCAPI ::TerrainInfo computeOffsetAndFactor(::DividedPos2d<4> const& worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TargetPoint sample(int, ::ChunkLocalNoiseCache::CacheEntry const&) const;
#else // @header-generator platform
    MCAPI ::TargetPoint sample(::BlockPos position) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~OverworldNoises3d();
#else // @header-generator platform
    MCAPI ~OverworldNoises3d();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float computeInitialDensity(int, float, float, float);
#else // @header-generator platform
    MCAPI static ::OverworldNoises3d make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::OverworldNoises3d make(::XoroshiroPositionalRandomFactory const&);
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::OverworldNoises3d&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
