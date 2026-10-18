#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class Vec2;
// clang-format on

class SimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>     mOrigin;
    ::ll::TypedStorage<4, 2048, int[512]> mNoiseMap;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SimplexNoise();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _getValue(::Vec2 const&) const;
#else // @header-generator platform
    MCAPI float _getValue(::Vec2 const& vin) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _getValue(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI float _getValue(::Vec3 const& vin) const;
#endif // @header-generator platform
    // NOLINTEND
};
