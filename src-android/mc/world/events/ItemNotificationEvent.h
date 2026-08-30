#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct CraftUpdateResultItemClientEvent;
struct ItemCompleteUseEvent;
struct ItemDefinitionEventTriggeredEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
struct ItemUsedOnEvent;
struct ShapedRecipeTriggeredEvent;
// clang-format on

struct ItemNotificationEvent
: public ::NotificationEventVariant<ItemGameplayEvent<void>, MutableItemGameplayEvent<CoordinatorResult>> {};
