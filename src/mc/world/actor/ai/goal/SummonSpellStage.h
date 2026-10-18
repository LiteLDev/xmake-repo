#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/SummonActorGoalDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/shared_types/v1_26_40/actor/SummonActorGoalDefinition.h"
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"

struct SummonSpellStage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonShape>  shape;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonTarget> target;
    ::ll::TypedStorage<4, 4, float>                                                            size;
    ::ll::TypedStorage<4, 4, int>                                                              baseDelay;
    ::ll::TypedStorage<4, 4, int>                                                              delayPerSummoning;
    ::ll::TypedStorage<4, 4, int>                                                              summonCap;
    ::ll::TypedStorage<4, 4, float>                                                            summonCapRadius;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                                    entityIdentifier;
    ::ll::TypedStorage<4, 4, int>                                                              entityLifespan;
    ::ll::TypedStorage<4, 4, int>                                                              entityCount;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           stageSoundEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   summonEvent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SummonSpellStage& operator=(SummonSpellStage const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SummonSpellStage();
#else // @header-generator platform
    MCAPI ~SummonSpellStage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
