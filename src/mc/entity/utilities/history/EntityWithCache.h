#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace History { struct StorageCache; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace History {

struct EntityWithCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::EntityId>               mID;
    ::ll::TypedStorage<8, 8, ::History::StorageCache&> mCache;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnke4456d;
    ::ll::UntypedStorage<8, 8> mUnka30418;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntityWithCache& operator=(EntityWithCache const&);
    EntityWithCache(EntityWithCache const&);
    EntityWithCache();
};

} // namespace History
