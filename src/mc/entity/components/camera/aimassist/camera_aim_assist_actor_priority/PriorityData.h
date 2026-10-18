#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mPresetIdx;
    ::ll::TypedStorage<4, 4, int> mCategoryIdx;
    ::ll::TypedStorage<4, 4, int> mActorIdx;
    ::ll::TypedStorage<4, 4, int> mPriority;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7846fb;
    ::ll::UntypedStorage<4, 4> mUnkf1f181;
    ::ll::UntypedStorage<4, 4> mUnkbd1492;
    ::ll::UntypedStorage<4, 4> mUnk2937c2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PriorityData& operator=(PriorityData const&);
    PriorityData(PriorityData const&);
    PriorityData();
#endif // @header-generator platform
};

} // namespace CameraAimAssistActorPriority
