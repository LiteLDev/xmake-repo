#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorShadowRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     mIsItem;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPos;
    ::ll::TypedStorage<4, 4, float>                                    mRadius;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorShadowRenderObject& operator=(ActorShadowRenderObject const&);
    ActorShadowRenderObject();
};
