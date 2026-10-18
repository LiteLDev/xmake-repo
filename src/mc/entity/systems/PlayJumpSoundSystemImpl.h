#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
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
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/LavaSlimeFlagComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorDefinitionIdentifierComponent.h"
#include "mc/entity/components/ActorUniqueIDComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/SoundEventPlayerComponent.h"
#include "mc/entity/components/TriggerJumpRequestComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct SoundEventPlayerComponent;
#endif // @header-generator platform
struct SoundEventRequestQueueComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct StateVectorComponent;
struct TriggerJumpRequestComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayJumpSoundSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                     Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>,
                                     Read<
                                         ActorDataFlagComponent,
                                         ActorDefinitionIdentifierComponent,
                                         ActorUniqueIDComponent,
                                         DimensionTypeComponent,
                                         SoundEventPlayerComponent,
                                         StateVectorComponent,
                                         AABBShapeComponent>,
                                     Write<>,
                                     AddRemove<>,
                                     GlobalRead<LocalConstBlockSourceFactoryComponent>,
                                     GlobalWrite<>,
                                     EntityFactoryT<>>> {
#else // @header-generator platform
struct PlayJumpSoundSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                     ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
                                     ::Read<
                                         ::ActorDataFlagComponent,
                                         ::ActorDefinitionIdentifierComponent,
                                         ::ActorUniqueIDComponent,
                                         ::DimensionTypeComponent,
                                         ::SoundEventPlayerComponent,
                                         ::StateVectorComponent,
                                         ::AABBShapeComponent>,
                                     ::Write<>,
                                     ::AddRemove<>,
                                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                                     ::GlobalWrite<>,
                                     ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlayJumpSoundSystem::SoundType const> mJumpType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PlayJumpSoundSystemImpl();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayJumpSoundSystemImpl();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::StrictExecutionContext<Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
#else // @header-generator platform
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doPlayJumpSoundSystem(
        ::StrictEntityContext const&,
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifierComponent const&,
        ::ActorUniqueIDComponent const&,
        ::DimensionTypeComponent const&,
        ::SoundEventPlayerComponent const&,
        ::StateVectorComponent const&,
        ::AABBShapeComponent const&,
        ::ViewT<StrictEntityContext, SoundEventRequestQueueComponent>,
        ::PlayJumpSoundSystem::SoundType const,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void doPlayJumpSoundSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDataFlagComponent const&                                   actorFlags,
        ::ActorDefinitionIdentifierComponent const&                       actorIdentifier,
        ::ActorUniqueIDComponent const&                                   actorUniqueID,
        ::DimensionTypeComponent const&                                   dimensionType,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::AABBShapeComponent const&                                       aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView,
        ::PlayJumpSoundSystem::SoundType const                            jumpType,
        ::IConstBlockSource const&                                        region
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
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
            Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>,
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                AABBShapeComponent>,
            Write<>,
            AddRemove<>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $singleTick(
#else // @header-generator platform
    MCAPI void $singleTick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
            Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>,
            Read<
                ActorDataFlagComponent,
                ActorDefinitionIdentifierComponent,
                ActorUniqueIDComponent,
                DimensionTypeComponent,
                SoundEventPlayerComponent,
                StateVectorComponent,
                AABBShapeComponent>,
            Write<>,
            AddRemove<>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        ::StrictEntityContext&
#else // @header-generator platform
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
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
