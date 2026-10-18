#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraInstructionComponent.h"

struct CameraImmediateSetEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                        mPresetIndex;
    ::ll::TypedStorage<4, 32, std::optional<MinecraftCamera::CameraInstructionComponent>> mInstructionComponent;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/components/CameraInstructionComponent.h"

struct CameraImmediateSetEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                            mPresetIndex;
    ::ll::TypedStorage<4, 32, ::std::optional<::MinecraftCamera::CameraInstructionComponent>> mInstructionComponent;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraImmediateSetEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
