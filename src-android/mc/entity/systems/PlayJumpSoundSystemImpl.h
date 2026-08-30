#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct SoundEventRequestQueueComponent;
// clang-format on

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
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlayJumpSoundSystem::SoundType const> mJumpType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayJumpSoundSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayJumpSoundSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);

    virtual void singleTick(::StrictExecutionContext<Filter<TriggerJumpRequestComponent, LavaSlimeFlagComponent>, Read<ActorDataFlagComponent, ActorDefinitionIdentifierComponent, ActorUniqueIDComponent, DimensionTypeComponent, SoundEventPlayerComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&, ::StrictEntityContext&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    );
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
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
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
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
