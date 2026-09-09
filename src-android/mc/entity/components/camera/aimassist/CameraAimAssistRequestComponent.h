#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

struct CameraAimAssistRequestComponent {
public:
    // CameraAimAssistRequestComponent inner types define
    enum Instruction : uchar {
        Clear = 0,
        Set   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CameraAimAssistRequestComponent::Instruction> mInstruction;
    ::ll::TypedStorage<4, 8, ::Vec2>                                         mViewFrustumAngle;
    ::ll::TypedStorage<4, 4, float>                                          mViewFrustumDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::TargetMode>                  mTargetMode;
    ::ll::TypedStorage<8, 40, ::HashedString>                                mPriorityPresetId;
    ::ll::TypedStorage<1, 1, bool>                                           mShowDebugRender;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistRequestComponent& operator=(CameraAimAssistRequestComponent const&);
};
