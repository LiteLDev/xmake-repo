#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
class ActorOwnerComponent;
#endif // @header-generator platform
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HitboxComponent;
#endif // @header-generator platform
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorAddedFlagComponent;
struct ActorChunkMoveFlagComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorLocalPlayerEntityMovedFlagComponent;
struct ActorRemovedFlagComponent;
struct ActorSetPositionRequestComponent;
struct ChunkPositionComponent;
#endif // @header-generator platform
struct Hitbox;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LocalPlayerComponent;
struct OffsetsComponent;
struct PaintingFlagComponent;
struct PlayerComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ActorSetPosSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<
                                  ::ActorAddedFlagComponent,
                                  ::ActorRemovedFlagComponent,
                                  ::LocalPlayerComponent,
                                  ::PaintingFlagComponent,
                                  ::PlayerComponent,
                                  ::ShulkerFlagComponent>,
                              ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
                              ::Write<
                                  ::AABBShapeComponent,
                                  ::ActorSetPositionRequestComponent,
                                  ::HitboxComponent,
                                  ::StateVectorComponent,
                                  ::SynchedActorDataComponent,
                                  ::ActorDataFlagComponent,
                                  ::ActorDataDirtyFlagsComponent>,
                              ::AddRemove<
                                  ::ActorChunkMoveFlagComponent,
                                  ::ActorLocalPlayerEntityMovedFlagComponent,
                                  ::ActorSetPositionRequestComponent>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // ActorSetPosSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::ActorAddedFlagComponent,
            ::ActorRemovedFlagComponent,
            ::LocalPlayerComponent,
            ::PaintingFlagComponent,
            ::PlayerComponent,
            ::ShulkerFlagComponent>,
        ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
        ::Write<
            ::AABBShapeComponent,
            ::ActorSetPositionRequestComponent,
            ::HitboxComponent,
            ::StateVectorComponent,
            ::SynchedActorDataComponent,
            ::ActorDataFlagComponent,
            ::ActorDataDirtyFlagsComponent>,
        ::AddRemove<
            ::ActorChunkMoveFlagComponent,
            ::ActorLocalPlayerEntityMovedFlagComponent,
            ::ActorSetPositionRequestComponent>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorSetPosSystem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorSetPosSystem();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::StrictExecutionContext<Filter<ActorAddedFlagComponent, ActorRemovedFlagComponent, LocalPlayerComponent, PaintingFlagComponent, PlayerComponent, ShulkerFlagComponent>, Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>, Write<AABBShapeComponent, ActorSetPositionRequestComponent, HitboxComponent, StateVectorComponent, SynchedActorDataComponent, ActorDataFlagComponent, ActorDataDirtyFlagsComponent>, AddRemove<ActorChunkMoveFlagComponent, ActorLocalPlayerEntityMovedFlagComponent, ActorSetPositionRequestComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<ActorAddedFlagComponent, ActorRemovedFlagComponent, LocalPlayerComponent, PaintingFlagComponent, PlayerComponent, ShulkerFlagComponent>, Read<ActorOwnerComponent, ChunkPositionComponent, OffsetsComponent>, Write<AABBShapeComponent, ActorSetPositionRequestComponent, HitboxComponent, StateVectorComponent, SynchedActorDataComponent, ActorDataFlagComponent, ActorDataDirtyFlagsComponent>, AddRemove<ActorChunkMoveFlagComponent, ActorLocalPlayerEntityMovedFlagComponent, ActorSetPositionRequestComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
#else // @header-generator platform
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void actorUpdateOwnerChunk(::EntityContext&);
#else // @header-generator platform
    MCAPI static void actorUpdateOwnerChunk(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem(bool);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void moveHitboxTo(::Vec3 const&, std::vector<Hitbox>&);
#else // @header-generator platform
    MCAPI static void moveHitboxTo(::Vec3 const& pos, ::std::vector<::Hitbox>& hitboxes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB refreshAABB(float const, ::Vec3 const&, ::Vec2 const&);

    MCNAPI static void setPosition(::EntityContext&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setPosition(::EntityContext& entity, ::Vec3 const& position, bool isClientSide);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(
#else // @header-generator platform
    MCAPI void $tick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $singleTick(
#else // @header-generator platform
    MCAPI void $singleTick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
