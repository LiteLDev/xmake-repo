#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AttachablesResources.h"
#include "mc/client/renderer/actor/v2/BakedAttachableData.h"

struct AttachableRendererPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::AttachablesResources>           mAttachableResources;
    ::ll::TypedStorage<8, 24, std::vector<BakedAttachableData>> mAttachables;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
