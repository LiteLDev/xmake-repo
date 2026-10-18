#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/PlayerViewPerspectiveChangedEvent.h"
#include "mc/world/events/ScreenSizeChangedEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/ClientInstanceGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PlayerViewPerspectiveChangedEvent;
struct ScreenSizeChangedEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct ClientInstanceNotificationEvent : public ::NotificationEventVariant<ClientInstanceGameplayEvent<void>> {};
#else // @header-generator platform
struct ClientInstanceNotificationEvent
: public ::EventVariantImpl<::PlayerViewPerspectiveChangedEvent const, ::ScreenSizeChangedEvent const> {};
#endif // @header-generator platform
