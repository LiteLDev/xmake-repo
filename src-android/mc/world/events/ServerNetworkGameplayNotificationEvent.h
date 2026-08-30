#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
// clang-format on

struct ServerNetworkGameplayNotificationEvent
: public ::NotificationEventVariant<MutableServerNetworkGameplayEvent<CoordinatorResult>> {};
