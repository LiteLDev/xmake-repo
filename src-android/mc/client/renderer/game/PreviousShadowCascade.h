#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/ShadowRenderingParameters.h"

struct PreviousShadowCascade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208>                                       mShadowMap;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPlayerPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviousShadowCascade& operator=(PreviousShadowCascade const&);
    PreviousShadowCascade();
};
