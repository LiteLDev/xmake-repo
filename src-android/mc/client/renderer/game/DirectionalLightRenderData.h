#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/level/dimension/DirectionalLightSource.h"

struct DirectionalLightRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mColor;
    ::ll::TypedStorage<4, 4, float>                                    mIntensity;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDirection;
    ::ll::TypedStorage<4, 4, float>                                    mAngle;
    ::ll::TypedStorage<4, 4, float>                                    mPerpendicularAngle;
    ::ll::TypedStorage<4, 4, ::DirectionalLightSource>                 mDirectionalLightSource;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mWorldMatrix;
    ::ll::TypedStorage<1, 1, bool>                                     mShadowsFullyFaded;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectionalLightRenderData& operator=(DirectionalLightRenderData const&);
};
