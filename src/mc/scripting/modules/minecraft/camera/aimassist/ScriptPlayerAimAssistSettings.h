#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerAimAssistSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                               mPresetId;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>>                       mViewAngle;
    ::ll::TypedStorage<4, 8, std::optional<float>>                       mDistance;
    ::ll::TypedStorage<1, 2, std::optional<CameraAimAssist::TargetMode>> mTargetMode;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPresetId;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mViewAngle;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mDistance;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraAimAssist::TargetMode>> mTargetMode;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
