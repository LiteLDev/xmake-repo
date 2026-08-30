#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/SummonActorGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

struct SummonSpellStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                       shape;
    ::ll::UntypedStorage<4, 4>                                       target;
    ::ll::TypedStorage<4, 4, float>                                  size;
    ::ll::TypedStorage<4, 4, int>                                    baseDelay;
    ::ll::TypedStorage<4, 4, int>                                    delayPerSummoning;
    ::ll::TypedStorage<4, 4, int>                                    summonCap;
    ::ll::TypedStorage<4, 4, float>                                  summonCapRadius;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>          entityIdentifier;
    ::ll::TypedStorage<4, 4, int>                                    entityLifespan;
    ::ll::TypedStorage<4, 4, int>                                    entityCount;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> stageSoundEvent;
    ::ll::TypedStorage<8, 24, std::string>                           summonEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonSpellStage& operator=(SummonSpellStage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SummonSpellStage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
