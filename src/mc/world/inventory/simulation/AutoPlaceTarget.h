#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#else // @header-generator platform
#endif // @header-generator platform

struct AutoPlaceTarget {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerEnumName;
    ::ll::TypedStorage<1, 1, bool>                 mStopWhenPlaced;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnka77396;
    ::ll::UntypedStorage<1, 1>  mUnkba18e0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AutoPlaceTarget& operator=(AutoPlaceTarget const&);
    AutoPlaceTarget(AutoPlaceTarget const&);
#endif // @header-generator platform
    AutoPlaceTarget();
};
