#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ActorAddEffectEvent.h"
#include "mc/world/events/ActorBeforeAcquireItemEvent.h"
#include "mc/world/events/ActorBeforeHealEvent.h"
#include "mc/world/events/ActorBeforeHurtEvent.h"
#include "mc/world/events/ActorDefinitionStartedEvent.h"
#include "mc/world/events/ActorUpgradeStartedEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutableActorGameplayEvent {};
#else // @header-generator platform
template <typename Result>
struct MutableActorGameplayEvent;

template <>
struct MutableActorGameplayEvent<CoordinatorResult> : MutableEventVariant<
                                                          ActorDefinitionStartedEvent,
                                                          ActorAddEffectEvent,
                                                          ActorBeforeAcquireItemEvent,
                                                          ActorBeforeHealEvent,
                                                          ActorBeforeHurtEvent,
                                                          ActorUpgradeStartedEvent> {};
#endif // @header-generator platform
