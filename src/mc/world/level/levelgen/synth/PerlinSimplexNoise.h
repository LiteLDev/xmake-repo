#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/synth/SimplexNoise.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
class SimplexNoise;
#endif // @header-generator platform
class Vec2;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PerlinSimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                        mLevels;
    ::ll::TypedStorage<8, 24, std::vector<SimplexNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                      mNormalizationFactor;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<::SimplexNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                          mNormalizationFactor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
#else // @header-generator platform
#endif // @header-generator platform
    PerlinSimplexNoise();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PerlinSimplexNoise(uint, int);
#else // @header-generator platform
    MCAPI PerlinSimplexNoise(uint seed, int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PerlinSimplexNoise(::IRandom&, int, bool);
#else // @header-generator platform
    MCAPI float* getRegion(
        float*        buffer,
        ::Vec2 const& pos,
        int           xSize,
        int           ySize,
        ::Vec2 const& scale,
        float         sizeScale,
        float         powScale
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _init(::IRandom&, bool);
#else // @header-generator platform
    MCAPI float getValue(float x, float y) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float* getRegion(float*, ::Vec2 const&, int, int, ::Vec2 const&, float, float) const;

    MCNAPI float getValue(::Vec3 const&) const;

    MCNAPI float getValue(float, float) const;

    MCNAPI float getValueNormalized(::Vec3 const&) const;

    MCNAPI float getValueNormalized(float, float) const;

    MCNAPI ~PerlinSimplexNoise();
#else // @header-generator platform
    MCAPI ~PerlinSimplexNoise();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, int);

    MCNAPI void* $ctor(::IRandom&, int, bool);
#else // @header-generator platform
    MCAPI void* $ctor(uint seed, int levels);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
