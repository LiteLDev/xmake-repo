#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_camera/CameraFadeAnimation.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_camera/CameraFadeAnimation.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraFadeEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
    ::ll::TypedStorage<8, 32, ::CameraFadeAnimation> mFadeAnimation;
    ::ll::TypedStorage<1, 1, bool>                   mPlayerWasSleeping;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraFadeEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
    ::ll::TypedStorage<8, 32, ::CameraFadeAnimation> mFadeAnimation;
    ::ll::TypedStorage<1, 1, bool>                   mPlayerWasSleeping;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraFadeEffectComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
