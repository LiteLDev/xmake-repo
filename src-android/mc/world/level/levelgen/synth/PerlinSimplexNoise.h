#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/SimplexNoise.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Vec2;
class Vec3;
// clang-format on

class PerlinSimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mLevels;
    ::ll::TypedStorage<8, 24, std::vector<SimplexNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                      mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
    PerlinSimplexNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerlinSimplexNoise(uint, int);

    MCNAPI PerlinSimplexNoise(::IRandom&, int, bool);

    MCNAPI void _init(::IRandom&, bool);

    MCNAPI float* getRegion(float*, ::Vec2 const&, int, int, ::Vec2 const&, float, float) const;

    MCNAPI float getValue(::Vec3 const&) const;

    MCNAPI float getValue(float, float) const;

    MCNAPI float getValueNormalized(::Vec3 const&) const;

    MCNAPI float getValueNormalized(float, float) const;

    MCNAPI ~PerlinSimplexNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, int);

    MCNAPI void* $ctor(::IRandom&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
