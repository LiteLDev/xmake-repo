#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/atomic_client_entity/AtomicClientEntityDefinitionGroup.h"
#include "mc/entity/atomic_client_entity/AtomicClientEntityFactory.h"

class AtomicClientEntityManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::AtomicClientEntityDefinitionGroup> mDefinitionGroup;
    ::ll::TypedStorage<8, 80, ::AtomicClientEntityFactory>         mFactory;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
