#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityKey {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mPresetIdx;
    ::ll::TypedStorage<4, 4, int> mCategoryIdx;
    ::ll::TypedStorage<4, 4, int> mActorIdx;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk88f902;
    ::ll::UntypedStorage<4, 4> mUnk521e36;
    ::ll::UntypedStorage<4, 4> mUnk276274;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PriorityKey& operator=(PriorityKey const&);
    PriorityKey(PriorityKey const&);
    PriorityKey();
#endif // @header-generator platform
};

} // namespace CameraAimAssistActorPriority
