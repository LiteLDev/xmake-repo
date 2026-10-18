#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#else // @header-generator platform
#endif // @header-generator platform

struct AllowedAnywhereConsume {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName> mOpenContainerNetId;
    ::ll::TypedStorage<1, 1, uchar>                mMinSlot;
    ::ll::TypedStorage<1, 1, uchar>                mMaxSlot;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk26126c;
    ::ll::UntypedStorage<1, 1>  mUnka50573;
    ::ll::UntypedStorage<1, 1>  mUnkfb169f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AllowedAnywhereConsume& operator=(AllowedAnywhereConsume const&);
    AllowedAnywhereConsume(AllowedAnywhereConsume const&);
#endif // @header-generator platform
    AllowedAnywhereConsume();
};
