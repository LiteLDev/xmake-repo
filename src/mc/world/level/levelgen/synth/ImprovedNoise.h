#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/levelgen/synth/YBlendingBugSettings.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ImprovedNoise {
public:
    // ImprovedNoise inner types declare
    // clang-format off
    struct LegacyWorldgenYStart;
    // clang-format on

    // ImprovedNoise inner types define
    struct LegacyWorldgenYStart {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const> startY;
        ::ll::TypedStorage<4, 4, int const>   startYUnit;
        ::ll::TypedStorage<4, 4, float const> startYFraction;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                 mOrigin;
    ::ll::TypedStorage<4, 2048, int[512]>             mNoiseMap;
    ::ll::TypedStorage<4, 12, ::YBlendingBugSettings> mYBlendingSettings;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ImprovedNoise();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _noise(::Vec3 const&) const;

    MCNAPI void readArea(float*, ::Vec3 const&, int, int, int, ::Vec3 const&, float, int, int, int) const;
#else // @header-generator platform
    MCAPI void readArea(
        float*        buffer,
        ::Vec3 const& pos,
        int           xCount,
        int           yCount,
        int           zCount,
        ::Vec3 const& s,
        float         pow,
        int           xStep,
        int           yStep,
        int           zStep
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};
