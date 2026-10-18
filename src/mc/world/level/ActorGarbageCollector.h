#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
// clang-format on

class ActorGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPendingEntitiesToRemove;
    ::ll::UntypedStorage<8, 24> mDiscardedSerializingEntities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mPendingEntitiesToRemove;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mDiscardedSerializingEntities;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearChunkDiscardedEntities();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void garbageCollectEntity(::OwnerPtr<::EntityContext> entity);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearPendingEntities();

    MCNAPI void garbageCollectEntity(::OwnerPtr<EntityContext>);

    MCNAPI void update();
#else // @header-generator platform
    MCAPI void update();
#endif // @header-generator platform
    // NOLINTEND
};
