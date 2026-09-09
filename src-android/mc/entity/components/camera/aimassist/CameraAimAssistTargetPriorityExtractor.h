#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/CameraAimAssistEntityTargetComponent.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/BlockTarget.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace CameraAimAssist { class BlockTarget; }
namespace CameraAimAssist { struct CompareResult; }
// clang-format on

struct CameraAimAssistTargetPriorityExtractor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mByAngle;
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mViewDir;
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mHeadPos;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistTargetPriorityExtractor& operator=(CameraAimAssistTargetPriorityExtractor const&);
    CameraAimAssistTargetPriorityExtractor(CameraAimAssistTargetPriorityExtractor const&);
    CameraAimAssistTargetPriorityExtractor();
};
