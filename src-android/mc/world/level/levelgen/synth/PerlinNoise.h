#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/ImprovedNoise.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Vec2;
class Vec3;
struct YBlendingBugSettings;
// clang-format on

class PerlinNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                   mLevels;
    ::ll::TypedStorage<8, 24, std::vector<ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                       mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&);
    PerlinNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerlinNoise(uint, int);

    MCNAPI PerlinNoise(::IRandom&, int);

    MCNAPI void _init(::IRandom&, ::YBlendingBugSettings);

    MCNAPI void fillRegion(float*, ::Vec2 const&, int, int, ::Vec2 const&) const;

    MCNAPI void fillRegion(float*, ::Vec3 const&, int, int, int, ::Vec3 const&, int, int, int) const;

    MCNAPI float getValueNormalized(::Vec3 const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, int);

    MCNAPI void* $ctor(::IRandom&, int);
    // NOLINTEND
};
