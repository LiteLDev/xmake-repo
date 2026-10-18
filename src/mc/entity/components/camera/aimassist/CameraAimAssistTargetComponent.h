#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/CameraAimAssistEntityTargetComponent.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/BlockTarget.h"

struct CameraAimAssistTargetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTargets;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistTargetComponent& operator=(CameraAimAssistTargetComponent const&);
};
#else // @header-generator platform
struct CameraAimAssistTargetComponent {};
#endif // @header-generator platform
