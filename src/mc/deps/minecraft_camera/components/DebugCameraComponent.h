#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraComponent.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace MinecraftCamera {

struct DebugCameraComponent {
public:
    // DebugCameraComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class InputMode : int {
        Game        = 0,
        DebugCamera = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 280, ::MinecraftCamera::CameraComponent>               mFrozenCamera;
    ::ll::TypedStorage<4, 4, ::MinecraftCamera::DebugCameraComponent::InputMode> mInputMode;
    ::ll::TypedStorage<1, 1, bool>                                               mDebugDrawGameCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugCameraComponent& operator=(DebugCameraComponent const&);
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class InputMode : int {
        Game        = 0,
        DebugCamera = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::MinecraftCamera::CameraComponent>               mFrozenCamera;
    ::ll::TypedStorage<4, 4, ::MinecraftCamera::DebugCameraComponent::InputMode> mInputMode;
    ::ll::TypedStorage<1, 1, bool>                                               mDebugDrawGameCamera;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DebugCameraComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class InputMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
