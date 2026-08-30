#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/levelgen/synth/YBlendingBugSettings.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

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
    // prevent constructor by default
    ImprovedNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float _noise(::Vec3 const&) const;

    MCNAPI void readArea(float*, ::Vec3 const&, int, int, int, ::Vec3 const&, float, int, int, int) const;
    // NOLINTEND
};
