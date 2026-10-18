#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/ChatEvent.h"
#include "mc/world/events/IncomingPacketEvent.h"
#include "mc/world/events/OutgoingPacketEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
// clang-format on

struct ServerNetworkGameplayNotificationEvent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::NotificationEventVariant<MutableServerNetworkGameplayEvent<CoordinatorResult>> {};
#else // @header-generator platform
: public ::EventVariantImpl<::ChatEvent const, ::IncomingPacketEvent const, ::OutgoingPacketEvent const> {};
#endif // @header-generator platform
