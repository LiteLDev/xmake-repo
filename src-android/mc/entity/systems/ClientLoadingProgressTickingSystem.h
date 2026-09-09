#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class BlockSourceComponent;
class ChunkPos;
class DimensionStateComponent;
class EntityContext;
class EntityRegistry;
class IBlockSource;
class LoadedChunksComponent;
class LoadingStateComponent;
class WeakEntityRef;
// clang-format on

class ClientLoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientLoadingProgressTickingSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<ChunkPos> const& mChunksNeededForLoadOffsets();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
