#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/CraftUpdateResultItemClientEvent.h"
#include "mc/world/events/ItemCompleteUseEvent.h"
#include "mc/world/events/ItemDefinitionEventTriggeredEvent.h"
#include "mc/world/events/ItemReleaseUseEvent.h"
#include "mc/world/events/ItemStartUseEvent.h"
#include "mc/world/events/ItemStartUseOnEvent.h"
#include "mc/world/events/ItemStopUseEvent.h"
#include "mc/world/events/ItemStopUseOnEvent.h"
#include "mc/world/events/ItemUseEvent.h"
#include "mc/world/events/ItemUseOnEvent.h"
#include "mc/world/events/ItemUsedOnEvent.h"
#include "mc/world/events/ShapedRecipeTriggeredEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
struct ItemNotificationEvent
: public ::NotificationEventVariant<ItemGameplayEvent<void>, MutableItemGameplayEvent<CoordinatorResult>> {};
#else // @header-generator platform
struct ItemNotificationEvent : public ::EventVariantImpl<
                                   ::ShapedRecipeTriggeredEvent const,
                                   ::CraftUpdateResultItemClientEvent const,
                                   ::ItemDefinitionEventTriggeredEvent const,
                                   ::ItemUseOnEvent const,
                                   ::ItemUseEvent const,
                                   ::ItemUsedOnEvent const,
                                   ::ItemStartUseOnEvent const,
                                   ::ItemStopUseOnEvent const,
                                   ::ItemStartUseEvent const,
                                   ::ItemCompleteUseEvent const,
                                   ::ItemReleaseUseEvent const,
                                   ::ItemStopUseEvent const> {};
#endif // @header-generator platform
