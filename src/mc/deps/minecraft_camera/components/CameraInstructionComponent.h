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
struct CameraInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mPos;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mRot;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraInstructionComponent(CameraInstructionComponent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraInstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mPos;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mRot;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraInstructionComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
