#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ActorShadowRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsItem;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPos;
    ::ll::TypedStorage<4, 4, float>        mRadius;
    // NOLINTEND
};
#else // @header-generator platform
struct ActorShadowRenderObject {};
#endif // @header-generator platform
#endif // @header-generator platform
