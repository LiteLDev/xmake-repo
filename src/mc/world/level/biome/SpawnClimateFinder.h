#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/ClimateParameters.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class DimensionHeightRange;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ClimateParameters;
#endif // @header-generator platform
struct OverworldNoises3d;
// clang-format on

class SpawnClimateFinder {
public:
    // SpawnClimateFinder inner types declare
    // clang-format off
    struct ResultDetails;
    // clang-format on

    // SpawnClimateFinder inner types define
    struct ResultDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> position;
        ::ll::TypedStorage<4, 4, int>         iterations;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, long>        fitness;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, int64>       fitness;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&>            mNoiseSampler;
    ::ll::TypedStorage<8, 8, ::DimensionHeightRange const&>         mDimensionHeightRange;
    ::ll::TypedStorage<8, 24, std::vector<ClimateParameters> const> mTargetClimates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&>                mNoiseSampler;
    ::ll::TypedStorage<8, 8, ::DimensionHeightRange const&>             mDimensionHeightRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClimateParameters> const> mTargetClimates;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnClimateFinder& operator=(SpawnClimateFinder const&);
    SpawnClimateFinder(SpawnClimateFinder const&);
    SpawnClimateFinder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    SpawnClimateFinder(std::vector<ClimateParameters>, ::OverworldNoises3d const&, ::DimensionHeightRange const&);
#else // @header-generator platform
    MCAPI SpawnClimateFinder(
        ::std::vector<::ClimateParameters> targetClimates,
        ::OverworldNoises3d const&         noiseSampler,
        ::DimensionHeightRange const&      dimensionHeightRange
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long _calculateClimateMinFitness(::BlockPos) const;
#else // @header-generator platform
    MCAPI int64 _calculateClimateMinFitness(::BlockPos pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnClimateFinder::ResultDetails _findSpawnPositionDetailedResult() const;

    MCNAPI ::BlockPos findSpawnPosition() const;
#else // @header-generator platform
    MCAPI ::SpawnClimateFinder::ResultDetails _findSpawnPositionDetailedResult() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<ClimateParameters>, ::OverworldNoises3d const&, ::DimensionHeightRange const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::vector<::ClimateParameters> targetClimates,
        ::OverworldNoises3d const&         noiseSampler,
        ::DimensionHeightRange const&      dimensionHeightRange
    );
#endif // @header-generator platform
    // NOLINTEND
};
