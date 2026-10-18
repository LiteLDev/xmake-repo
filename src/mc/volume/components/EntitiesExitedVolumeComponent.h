#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntitySet.h"

class EntitiesExitedVolumeComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::EntitySet> mEntities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::EntitySet> mEntities;
#endif // @header-generator platform
    // NOLINTEND
};
