#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum TimelineErrorCode : uint {
#else // @header-generator platform
enum class TimelineErrorCode : int {
#endif // @header-generator platform
    NoKeyframes                      = 0,
    DuplicateKeyframeTicks           = 1,
    InvalidKeyframeTick              = 2,
    NoAttributeTracks                = 3,
    DuplicateAttributeTrackNames     = 4,
    NoAttributeLayerTrackName        = 5,
    PhasesWithInvalidPeriod          = 6,
    InvalidPhaseStartTick            = 7,
    DuplicatePhaseStartTick          = 8,
    DuplicatePhaseName               = 9,
    AttributeLayerTrackAlreadyExists = 10,
    TimeMarkerNotAdded               = 11,
    WorldClockNotFound               = 12,
};
