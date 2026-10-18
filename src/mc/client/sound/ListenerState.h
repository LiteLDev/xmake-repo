#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct ListenerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3> mForward;
    ::ll::TypedStorage<4, 12, ::Vec3> mUp;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct ListenerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3> mForward;
    ::ll::TypedStorage<4, 12, ::Vec3> mUp;
    // NOLINTEND
};
#else // @header-generator platform
struct ListenerState {};
#endif // @header-generator platform
#endif // @header-generator platform
