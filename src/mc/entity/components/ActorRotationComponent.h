#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct ActorRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mRot;
    ::ll::TypedStorage<4, 8, ::Vec2> mRotPrev;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorRotationComponent(ActorRotationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
