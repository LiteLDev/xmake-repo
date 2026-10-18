#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityData.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
struct CameraAimAssistActorPriorityServerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace CameraAimAssistActorPriority { struct PriorityData; }
#endif // @header-generator platform
// clang-format on

struct CameraAimAssistActorPriorityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CameraAimAssistActorPriority::PriorityData>> mPriorities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAimAssistActorPriority::PriorityData>> mPriorities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraAimAssistActorPriorityPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CameraAimAssistActorPriorityPacketPayload(::CameraAimAssistActorPriorityServerComponent const&);
#else // @header-generator platform
    MCAPI explicit CameraAimAssistActorPriorityPacketPayload(
        ::CameraAimAssistActorPriorityServerComponent const& aimAssistActorPriorityComponent
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::CameraAimAssistActorPriorityServerComponent const& aimAssistActorPriorityComponent);
#endif // @header-generator platform
    // NOLINTEND
};
