#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/camera/aimassist/camera_aim_assist_actor_priority/PriorityKey.h"

// auto generated forward declare list
// clang-format off
namespace CameraAimAssistActorPriority { struct PriorityData; }
// clang-format on

struct CameraAimAssistActorPriorityClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<CameraAimAssistActorPriority::PriorityKey, int>> mEntityPriorities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getEntityPriority(int, int, int) const;

    MCNAPI bool isExcluded(int, int) const;

    MCNAPI void setEntityPriorities(std::vector<CameraAimAssistActorPriority::PriorityData> const&);
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAimAssistActorPriorityClientComponent {};
#endif // @header-generator platform
