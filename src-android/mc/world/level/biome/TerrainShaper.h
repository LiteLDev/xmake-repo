#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/ToFloatFunction.h"

class TerrainShaper {
public:
    // TerrainShaper inner types declare
    // clang-format off
    struct Point;
    // clang-format on

    // TerrainShaper inner types define
    struct Point {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const> mContinents;
        ::ll::TypedStorage<4, 4, float const> mErosion;
        ::ll::TypedStorage<4, 4, float const> mRidges;
        ::ll::TypedStorage<4, 4, float const> mWeirdness;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static float getContinents(::TerrainShaper::Point const&);

        MCNAPI static float getErosion(::TerrainShaper::Point const&);

        MCNAPI static float getRidges(::TerrainShaper::Point const&);

        MCNAPI static float getWeirdness(::TerrainShaper::Point const&);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& CONTINENTS_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& EROSION_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& RIDGES_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& WEIRDNESS_EXTRACTOR();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>          mOffsetSpline;
    ::ll::UntypedStorage<8, 152>          mFactorSpline;
    ::ll::UntypedStorage<8, 152>          mJaggednessSpline;
    ::ll::TypedStorage<4, 4, float const> GLOBAL_OFFSET;
    ::ll::TypedStorage<4, 4, float const> FACTOR_SCALER;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainShaper& operator=(TerrainShaper const&);
    TerrainShaper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TerrainShaper(::TerrainShaper const&);

    MCNAPI float factor(float, float, float) const;

    MCNAPI float jaggedness(float, float, float) const;

    MCNAPI float offset(float, float, float) const;

    MCNAPI ~TerrainShaper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    buildErosionJaggednessSpline(float const, float const, float const, float const);

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    buildErosionOffsetSpline(std::string const&, float, float, float, float, float, float, bool, bool);

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildMountainRidgeSplineWithPoints(float, bool);

    MCNAPI static ::TerrainShaper buildOverworld();

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildRidgeJaggednessSpline(float const, float const);

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildWeirdnessJaggednessSpline(float const);

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> getErosionFactor(float, bool);

    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    ridgeSpline(std::string const&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TerrainShaper const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
