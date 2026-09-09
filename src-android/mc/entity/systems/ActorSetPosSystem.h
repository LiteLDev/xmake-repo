#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorAddedFlagComponent.h"
#include "mc/deps/vanilla_components/ActorChunkMoveFlagComponent.h"
#include "mc/deps/vanilla_components/ActorDataDirtyFlagsComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorLocalPlayerEntityMovedFlagComponent.h"
#include "mc/deps/vanilla_components/ActorRemovedFlagComponent.h"
#include "mc/deps/vanilla_components/HitboxComponent.h"
#include "mc/deps/vanilla_components/LocalPlayerComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/PaintingFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/ShulkerFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorSetPositionRequestComponent.h"
#include "mc/entity/components/ChunkPositionComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntityContext;
class StrictEntityContext;
class Vec2;
class Vec3;
struct Hitbox;
struct TickingSystemWithInfo;
// clang-format on

class ActorSetPosSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                              Filter<
                                  ActorAddedFlagComponent,
                                  ActorRemovedFlagComponent,
                                  LocalPlayerComponent,
                                  PaintingFlagComponent,
                                  PlayerComponent,
                                  ShulkerFlagComponent>,
                              Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>,
                              Write<
                                  AABBShapeComponent,
                                  ActorSetPositionRequestComponent,
                                  HitboxComponent,
                                  StateVectorComponent,
                                  SynchedActorDataComponent,
                                  ActorDataFlagComponent,
                                  ActorDataDirtyFlagsComponent>,
                              AddRemove<
                                  ActorChunkMoveFlagComponent,
                                  ActorLocalPlayerEntityMovedFlagComponent,
                                  ActorSetPositionRequestComponent>,
                              GlobalRead<>,
                              GlobalWrite<>,
                              EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSetPosSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorSetPosSystem();

    virtual void tick(::StrictExecutionContext<Filter<ActorAddedFlagComponent, ActorRemovedFlagComponent, LocalPlayerComponent, PaintingFlagComponent, PlayerComponent, ShulkerFlagComponent>, Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>, Write<AABBShapeComponent, ActorSetPositionRequestComponent, HitboxComponent, StateVectorComponent, SynchedActorDataComponent, ActorDataFlagComponent, ActorDataDirtyFlagsComponent>, AddRemove<ActorChunkMoveFlagComponent, ActorLocalPlayerEntityMovedFlagComponent, ActorSetPositionRequestComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<ActorAddedFlagComponent, ActorRemovedFlagComponent, LocalPlayerComponent, PaintingFlagComponent, PlayerComponent, ShulkerFlagComponent>, Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>, Write<AABBShapeComponent, ActorSetPositionRequestComponent, HitboxComponent, StateVectorComponent, SynchedActorDataComponent, ActorDataFlagComponent, ActorDataDirtyFlagsComponent>, AddRemove<ActorChunkMoveFlagComponent, ActorLocalPlayerEntityMovedFlagComponent, ActorSetPositionRequestComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void actorUpdateOwnerChunk(::EntityContext&);

    MCNAPI static ::TickingSystemWithInfo createSystem(bool);

    MCNAPI static void moveHitboxTo(::Vec3 const&, std::vector<Hitbox>&);

    MCNAPI static ::AABB refreshAABB(float const, ::Vec3 const&, ::Vec2 const&);

    MCNAPI static void setPosition(::EntityContext&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            Filter<
                ActorAddedFlagComponent,
                ActorRemovedFlagComponent,
                LocalPlayerComponent,
                PaintingFlagComponent,
                PlayerComponent,
                ShulkerFlagComponent>,
            Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>,
            Write<
                AABBShapeComponent,
                ActorSetPositionRequestComponent,
                HitboxComponent,
                StateVectorComponent,
                SynchedActorDataComponent,
                ActorDataFlagComponent,
                ActorDataDirtyFlagsComponent>,
            AddRemove<
                ActorChunkMoveFlagComponent,
                ActorLocalPlayerEntityMovedFlagComponent,
                ActorSetPositionRequestComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            Filter<
                ActorAddedFlagComponent,
                ActorRemovedFlagComponent,
                LocalPlayerComponent,
                PaintingFlagComponent,
                PlayerComponent,
                ShulkerFlagComponent>,
            Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>,
            Write<
                AABBShapeComponent,
                ActorSetPositionRequestComponent,
                HitboxComponent,
                StateVectorComponent,
                SynchedActorDataComponent,
                ActorDataFlagComponent,
                ActorDataDirtyFlagsComponent>,
            AddRemove<
                ActorChunkMoveFlagComponent,
                ActorLocalPlayerEntityMovedFlagComponent,
                ActorSetPositionRequestComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        ::StrictEntityContext&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
