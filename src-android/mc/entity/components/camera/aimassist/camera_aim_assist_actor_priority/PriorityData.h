#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPresetIdx;
    ::ll::TypedStorage<4, 4, int> mCategoryIdx;
    ::ll::TypedStorage<4, 4, int> mActorIdx;
    ::ll::TypedStorage<4, 4, int> mPriority;
    // NOLINTEND
};

} // namespace CameraAimAssistActorPriority
