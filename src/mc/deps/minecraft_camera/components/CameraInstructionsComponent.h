#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraInstruction.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct CameraInstruction;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraInstructionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CameraInstruction>> mInstructions;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraInstructionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraInstruction>> mInstructions;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraInstructionsComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
