#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPresetIdx;
    ::ll::TypedStorage<4, 4, int> mCategoryIdx;
    ::ll::TypedStorage<4, 4, int> mActorIdx;
    // NOLINTEND
};

} // namespace CameraAimAssistActorPriority
