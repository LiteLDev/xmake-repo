#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

class CameraAimAssistPresetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>               mPresetId;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::TargetMode> mTargetMode;
    ::ll::TypedStorage<4, 8, ::Vec2>                        mAngle;
    ::ll::TypedStorage<4, 4, float>                         mDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetComponent& operator=(CameraAimAssistPresetComponent const&);
};
