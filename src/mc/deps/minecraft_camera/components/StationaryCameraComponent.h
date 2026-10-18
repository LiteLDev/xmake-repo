#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
class StationaryCameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRot;
    // NOLINTEND

public:
    // prevent constructor by default
    StationaryCameraComponent& operator=(StationaryCameraComponent const&);
    StationaryCameraComponent(StationaryCameraComponent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class StationaryCameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRot;
    // NOLINTEND
};
#else // @header-generator platform
class StationaryCameraComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
