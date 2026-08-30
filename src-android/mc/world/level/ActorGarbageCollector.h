#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

class ActorGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mPendingEntitiesToRemove;
    ::ll::UntypedStorage<8, 24> mDiscardedSerializingEntities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearChunkDiscardedEntities();

    MCNAPI void clearPendingEntities();

    MCNAPI void garbageCollectEntity(::OwnerPtr<EntityContext>);

    MCNAPI void update();
    // NOLINTEND
};
