#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

namespace mce::framebuilder {

struct DirectionalLightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mSunColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mMoonColor;
    ::ll::TypedStorage<4, 4, float>         mSunIlluminance;
    ::ll::TypedStorage<4, 4, float>         mMoonIlluminance;
    ::ll::TypedStorage<4, 4, float>         mOrbitalOffsetDegrees;
    ::ll::TypedStorage<4, 16, ::mce::Color> mEndChaosColor;
    ::ll::TypedStorage<4, 4, float>         mEndChaosIlluminance;
    // NOLINTEND
};

} // namespace mce::framebuilder
