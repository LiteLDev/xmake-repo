#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class AnimationComponentID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mData;
#else // @header-generator platform
    union {
        uint64                           mActorUniqueId : 54;
        ::ll::TypedStorage<8, 8, uint64> mAllBits;
        uint64                           mAttachableIndex : 6;
        uint64                           mSubClientId     : 4;
    } mData;
#endif // @header-generator platform
    // NOLINTEND
};
