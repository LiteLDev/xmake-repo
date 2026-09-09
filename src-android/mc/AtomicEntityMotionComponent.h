#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

struct AtomicEntityMotionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPositionDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRotationDelta;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityMotionComponent& operator=(AtomicEntityMotionComponent const&);
    AtomicEntityMotionComponent(AtomicEntityMotionComponent const&);
};
