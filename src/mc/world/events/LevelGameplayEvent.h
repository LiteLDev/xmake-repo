#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LevelAddedActorEvent.h"
#include "mc/world/events/LevelBroadcastEvent.h"
#include "mc/world/events/LevelDayCycleEvent.h"
#include "mc/world/events/LevelGameRuleChangeEvent.h"
#include "mc/world/events/LevelStartLeaveGameEvent.h"
#include "mc/world/events/LevelTickingAreaFinishedLoadingEvent.h"
#include "mc/world/events/ScriptingWorldInitializeEvent.h"
#include "mc/world/level/LevelSoundBroadcastEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct LevelGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct LevelGameplayEvent;

template <>
struct LevelGameplayEvent<void> : ConstEventVariant<
                                      LevelTickingAreaFinishedLoadingEvent,
                                      LevelAddedActorEvent,
                                      LevelBroadcastEvent,
                                      LevelSoundBroadcastEvent,
                                      LevelDayCycleEvent,
                                      LevelStartLeaveGameEvent,
                                      LevelGameRuleChangeEvent,
                                      ScriptingWorldInitializeEvent> {};
#endif // @header-generator platform
