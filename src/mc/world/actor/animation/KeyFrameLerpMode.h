#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/KeyFrameLerpStyle.h"

class KeyFrameLerpMode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<glm::mat<4, 4, float, (glm::qualifier)0>>> mPrecomputedCubicCoeffs;
    ::ll::TypedStorage<4, 4, ::KeyFrameLerpStyle>                                       mLerpStyle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::KeyFrameLerpMode& operator=(::KeyFrameLerpMode&&);

    MCNAPI ::KeyFrameLerpMode& operator=(::KeyFrameLerpMode const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::glm::mat4x4>> mPrecomputedCubicCoeffs;
    ::ll::TypedStorage<4, 4, ::KeyFrameLerpStyle>              mLerpStyle;
#endif // @header-generator platform
    // NOLINTEND
};
