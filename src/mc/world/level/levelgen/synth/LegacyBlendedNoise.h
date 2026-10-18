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
#if defined(LL_PLAT_A) // @header-generator platform
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&);
#else // @header-generator platform
#endif // @header-generator platform
    LegacyBlendedNoise();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LegacyBlendedNoise(::IRandom&);

    MCNAPI LegacyBlendedNoise(::LegacyBlendedNoise const&);

    MCNAPI ~LegacyBlendedNoise();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LegacyBlendedNoise make(::IRandom&);
#else // @header-generator platform
    MCAPI explicit LegacyBlendedNoise(::IRandom& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IRandom&);

    MCNAPI void* $ctor(::LegacyBlendedNoise const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::IRandom& random);
#endif // @header-generator platform
    // NOLINTEND
};
