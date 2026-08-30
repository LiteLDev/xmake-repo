#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

struct AtomicEntityTransformComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mPositionTickStart;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRotationTickStart;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityTransformComponent& operator=(AtomicEntityTransformComponent const&);
    AtomicEntityTransformComponent(AtomicEntityTransformComponent const&);
};
