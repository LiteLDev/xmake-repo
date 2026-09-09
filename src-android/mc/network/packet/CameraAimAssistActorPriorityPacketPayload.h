#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityData.h"

// auto generated forward declare list
// clang-format off
struct CameraAimAssistActorPriorityServerComponent;
// clang-format on

struct CameraAimAssistActorPriorityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CameraAimAssistActorPriority::PriorityData>> mPriorities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraAimAssistActorPriorityPacketPayload(::CameraAimAssistActorPriorityServerComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const&);
    // NOLINTEND
};
