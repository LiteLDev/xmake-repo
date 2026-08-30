#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/aimassist/camera_aim_assist/BlockTarget.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist_system_util/BlockHitDetectResult.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist_system_util/BlockHitDetectResultEqual.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist_system_util/BlockHitDetectResultHash.h"

struct CameraAimAssistBlockTargetsComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_set<CameraAimAssistSystemUtil::BlockHitDetectResult, CameraAimAssistSystemUtil::BlockHitDetectResultHash, CameraAimAssistSystemUtil::BlockHitDetectResultEqual, std::allocator<CameraAimAssistSystemUtil::BlockHitDetectResult>>> mResultSet;
    ::ll::TypedStorage<8, 24, std::vector<CameraAimAssist::BlockTarget>> mTargets;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistBlockTargetsComponent& operator=(CameraAimAssistBlockTargetsComponent const&);
};
