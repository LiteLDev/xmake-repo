#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CameraAimAssistCachedFrustumComponent;
struct CameraAimAssistCachedPositionDataComponent;
struct CameraAimAssistComponent;
struct CameraAimAssistEntityTargetComponent;
struct CameraAimAssistResetEntityExcludedStatusFlagComponent;
struct CameraAimAssistTickComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace CameraAimAssistFetchValidEntityTargetSystem {

struct AimAssistRelatedComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CameraAimAssistEntityTargetComponent*>                        entityTargets;
    ::ll::TypedStorage<8, 8, ::CameraAimAssistCachedFrustumComponent const*>                 frustum;
    ::ll::TypedStorage<8, 8, ::CameraAimAssistCachedPositionDataComponent const*>            cachedPosition;
    ::ll::TypedStorage<8, 8, ::CameraAimAssistTickComponent const*>                          tick;
    ::ll::TypedStorage<8, 8, ::CameraAimAssistComponent const*>                              aimAssist;
    ::ll::TypedStorage<8, 8, ::CameraAimAssistResetEntityExcludedStatusFlagComponent const*> resetExcludedStatusFlag;
    ::ll::TypedStorage<8, 8, ::SynchedActorDataComponent const*>                             playerSynchedActorData;
    // NOLINTEND
};

} // namespace CameraAimAssistFetchValidEntityTargetSystem
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
