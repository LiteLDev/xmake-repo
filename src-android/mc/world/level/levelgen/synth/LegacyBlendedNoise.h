#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/PerlinNoise.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class LegacyBlendedNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> minLimitNoise;
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> maxLimitNoise;
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> mainNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&);
    LegacyBlendedNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyBlendedNoise(::IRandom&);

    MCNAPI LegacyBlendedNoise(::LegacyBlendedNoise const&);

    MCNAPI ~LegacyBlendedNoise();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LegacyBlendedNoise make(::IRandom&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IRandom&);

    MCNAPI void* $ctor(::LegacyBlendedNoise const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
