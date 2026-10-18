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
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static float getContinents(::TerrainShaper::Point const&);
#else // @header-generator platform
        MCAPI static float getContinents(::TerrainShaper::Point const& point);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static float getErosion(::TerrainShaper::Point const&);
#else // @header-generator platform
        MCAPI static float getErosion(::TerrainShaper::Point const& point);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static float getRidges(::TerrainShaper::Point const&);
#else // @header-generator platform
        MCFOLD static float getRidges(::TerrainShaper::Point const& point);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static float getWeirdness(::TerrainShaper::Point const&);
#else // @header-generator platform
        MCFOLD static float getWeirdness(::TerrainShaper::Point const& point);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& CONTINENTS_EXTRACTOR();
#else // @header-generator platform
        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& CONTINENTS_EXTRACTOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& EROSION_EXTRACTOR();
#else // @header-generator platform
        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& EROSION_EXTRACTOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& RIDGES_EXTRACTOR();
#else // @header-generator platform
        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& RIDGES_EXTRACTOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::ToFloatFunction<TerrainShaper::Point>& WEIRDNESS_EXTRACTOR();
#else // @header-generator platform
        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& WEIRDNESS_EXTRACTOR();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 152>          mOffsetSpline;
    ::ll::UntypedStorage<8, 152>          mFactorSpline;
    ::ll::UntypedStorage<8, 152>          mJaggednessSpline;
    ::ll::TypedStorage<4, 4, float const> GLOBAL_OFFSET;
    ::ll::TypedStorage<4, 4, float const> FACTOR_SCALER;
#else // @header-generator platform
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mOffsetSpline;
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mFactorSpline;
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mJaggednessSpline;
    ::ll::TypedStorage<4, 4, float const>                                       GLOBAL_OFFSET;
    ::ll::TypedStorage<4, 4, float const>                                       FACTOR_SCALER;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TerrainShaper& operator=(TerrainShaper const&);
    TerrainShaper();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TerrainShaper(::TerrainShaper const&);

    MCNAPI float factor(float, float, float) const;

    MCNAPI float jaggedness(float, float, float) const;

    MCNAPI float offset(float, float, float) const;

    MCNAPI ~TerrainShaper();
#else // @header-generator platform
    MCAPI ~TerrainShaper();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    buildErosionJaggednessSpline(float const, float const, float const, float const);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionJaggednessSpline(
        float const jaggednessFactorAtPeakRidgeAndErosionIndex0,
        float const jaggednessFactorAtPeakRidgeAndErosionIndex1,
        float const jaggednessFactorAtHighRidgeAndErosionIndex0,
        float const jaggednessFactorAtHighRidgeAndErosionIndex1
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    buildErosionOffsetSpline(std::string const&, float, float, float, float, float, float, bool, bool);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionOffsetSpline(
        ::std::string const& name,
        float                lowValley,
        float                hill,
        float                tallHill,
        float                mountainFactor,
        float                plain,
        float                swamp,
        bool                 includeExtremeHills,
        bool                 saddle
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildMountainRidgeSplineWithPoints(float, bool);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildMountainRidgeSplineWithPoints(float modulation, bool saddle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TerrainShaper buildOverworld();
#else // @header-generator platform
    MCAPI static ::TerrainShaper buildOverworld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildRidgeJaggednessSpline(float const, float const);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildRidgeJaggednessSpline(float const jaggednessFactorAtPeakRidge, float const jaggednessFactorAtHighRidge);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> buildWeirdnessJaggednessSpline(float const);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildWeirdnessJaggednessSpline(float const jaggednessFactor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point> getErosionFactor(float, bool);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> getErosionFactor(float baseValue, bool shatteredTerrain);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ToFloatFunction<TerrainShaper::Point>
    ridgeSpline(std::string const&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TerrainShaper const&);
#else // @header-generator platform
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> ridgeSpline(
        ::std::string const& name,
        float                valley,
        float                low,
        float                mid,
        float                high,
        float                peaks,
        float                minValleySteepness
    );
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
