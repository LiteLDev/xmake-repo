#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntitySet.h"

class EntitiesPendingEnterVolumeComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::EntitySet> mEntities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::EntitySet> mEntities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EntitiesPendingEnterVolumeComponent& operator=(EntitiesPendingEnterVolumeComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
