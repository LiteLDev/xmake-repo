#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

struct LightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mColor;
    ::ll::TypedStorage<4, 4, float>                                    mEmissionPower;
    ::ll::TypedStorage<1, 1, bool>                                     mIsLarge;
    ::ll::TypedStorage<1, 1, bool>                                     mIsSun;
    // NOLINTEND

public:
    // prevent constructor by default
    LightParameters& operator=(LightParameters const&);
    LightParameters();
};

} // namespace dragon::frameobject::components
