#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/ServerInstanceLeaveGameDoneEvent.h"
#include "mc/world/events/ServerInstanceRequestResourceReload.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/ServerInstanceGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ServerInstanceLeaveGameDoneEvent;
struct ServerInstanceRequestResourceReload;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct ServerInstanceNotificationEvent : public ::NotificationEventVariant<ServerInstanceGameplayEvent<void>> {};
#else // @header-generator platform
struct ServerInstanceNotificationEvent
: public ::EventVariantImpl<::ServerInstanceLeaveGameDoneEvent const, ::ServerInstanceRequestResourceReload const> {};
#endif // @header-generator platform
