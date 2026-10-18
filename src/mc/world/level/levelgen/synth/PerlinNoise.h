#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/synth/ImprovedNoise.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
#else // @header-generator platform
class ImprovedNoise;
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct YBlendingBugSettings;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PerlinNoise {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                   mLevels;
    ::ll::TypedStorage<8, 24, std::vector<ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                       mNormalizationFactor;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                       mLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<::ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                           mNormalizationFactor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PerlinNoise& operator=(PerlinNoise const&);
#else // @header-generator platform
#endif // @header-generator platform
    PerlinNoise();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PerlinNoise(uint, int);
#else // @header-generator platform
    MCAPI PerlinNoise(::IRandom& random, int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PerlinNoise(::IRandom&, int);
#else // @header-generator platform
    MCAPI PerlinNoise(uint seed, int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _init(::IRandom&, ::YBlendingBugSettings);
#else // @header-generator platform
    MCAPI float getValue(::Vec3 const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillRegion(float*, ::Vec2 const&, int, int, ::Vec2 const&) const;

    MCNAPI void fillRegion(float*, ::Vec3 const&, int, int, int, ::Vec3 const&, int, int, int) const;

    MCNAPI float getValueNormalized(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ~PerlinNoise();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, int);
#else // @header-generator platform
    MCAPI void* $ctor(::IRandom& random, int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IRandom&, int);
#else // @header-generator platform
    MCAPI void* $ctor(uint seed, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
