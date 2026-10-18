#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ActorOwnerComponent;
class BlockSourceComponent;
class ChunkPos;
class DimensionStateComponent;
class EntityContext;
class EntityRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class LoadedChunksComponent;
class LoadingStateComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ClientLoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ClientLoadingProgressTickingSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _calculateLoadingProgressView(
        ::ActorOwnerComponent&,
        ::BlockSourceComponent&,
        ::DimensionStateComponent&,
        ::LoadedChunksComponent&,
        ::LoadingStateComponent&,
        bool
    );

    MCNAPI static float getLoadingProgress(::WeakRef<EntityContext>);

    MCNAPI static ::LoadingState getLoadingState(::WeakRef<EntityContext>);

    MCNAPI static ::LoadingState getLoadingState(::EntityContext const&);

    MCNAPI static bool hasFinishedLoading(::WeakRef<EntityContext>);

    MCNAPI static bool hasFinishedLoading(::EntityContext const&);

    MCNAPI static void notifyWaitingForPreload(::WeakEntityRef, bool);

    MCNAPI static void setLoadingProgress(::EntityContext&, float);

    MCNAPI static void setLoadingState(::EntityContext&, ::LoadingState);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void _calculateLoadingProgressView(
        ::ActorOwnerComponent&     actorOwnerComponent,
        ::BlockSourceComponent&    blockSourceComponent,
        ::DimensionStateComponent& dimensionStateComponent,
        ::LoadedChunksComponent&   loadedChunksComponent,
        ::LoadingStateComponent&   loadingStateComponent,
        bool                       isTextureGroupReloading
    );

    MCAPI static float getLoadingProgress(::WeakRef<::EntityContext> entityRef);

    MCAPI static ::LoadingState getLoadingState(::WeakRef<::EntityContext> entityRef);

    MCAPI static bool hasFinishedLoading(::EntityContext const& entity);

    MCAPI static bool hasFinishedLoading(::WeakRef<::EntityContext> entityRef);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ChunkPos> const& mChunksNeededForLoadOffsets();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::vector<::ChunkPos> const& mChunksNeededForLoadOffsets();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $tick(::EntityRegistry& registry);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
