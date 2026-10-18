#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/ResourceLoadManager.h"
#else // @header-generator platform
#endif // @header-generator platform

class ResourceTaskGroupScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mPrev;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb79a4d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ResourceTaskGroupScope& operator=(ResourceTaskGroupScope const&);
    ResourceTaskGroupScope(ResourceTaskGroupScope const&);
#endif // @header-generator platform
    ResourceTaskGroupScope();
};
