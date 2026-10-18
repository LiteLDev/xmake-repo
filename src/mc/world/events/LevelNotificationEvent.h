#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/LevelAddedActorEvent.h"
#include "mc/world/events/LevelBroadcastEvent.h"
#include "mc/world/events/LevelDayCycleEvent.h"
#include "mc/world/events/LevelGameRuleChangeEvent.h"
#include "mc/world/events/LevelStartLeaveGameEvent.h"
#include "mc/world/events/LevelTickingAreaFinishedLoadingEvent.h"
#include "mc/world/events/LevelWeatherChangedEvent.h"
#include "mc/world/events/ScriptingWorldInitializeEvent.h"
#include "mc/world/level/LevelSoundBroadcastEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
struct LevelNotificationEvent
: public ::NotificationEventVariant<LevelGameplayEvent<void>, MutableLevelGameplayEvent<CoordinatorResult>> {};
#else // @header-generator platform
struct LevelNotificationEvent : public ::EventVariantImpl<
                                    ::LevelTickingAreaFinishedLoadingEvent const,
                                    ::LevelAddedActorEvent const,
                                    ::LevelBroadcastEvent const,
                                    ::LevelSoundBroadcastEvent const,
                                    ::LevelDayCycleEvent const,
                                    ::LevelStartLeaveGameEvent const,
                                    ::LevelGameRuleChangeEvent const,
                                    ::ScriptingWorldInitializeEvent const,
                                    ::LevelWeatherChangedEvent const> {};
#endif // @header-generator platform
