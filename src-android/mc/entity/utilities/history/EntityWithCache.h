#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace History { struct StorageCache; }
// clang-format on

namespace History {

struct EntityWithCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId>               mID;
    ::ll::TypedStorage<8, 8, ::History::StorageCache&> mCache;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityWithCache& operator=(EntityWithCache const&);
    EntityWithCache(EntityWithCache const&);
    EntityWithCache();
};

} // namespace History
