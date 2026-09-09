#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct LevelAddedActorEvent;
struct LevelBroadcastEvent;
struct LevelDayCycleEvent;
struct LevelGameRuleChangeEvent;
struct LevelSoundBroadcastEvent;
struct LevelStartLeaveGameEvent;
struct LevelTickingAreaFinishedLoadingEvent;
struct LevelWeatherChangedEvent;
struct ScriptingWorldInitializeEvent;
// clang-format on

struct LevelNotificationEvent
: public ::NotificationEventVariant<LevelGameplayEvent<void>, MutableLevelGameplayEvent<CoordinatorResult>> {};
