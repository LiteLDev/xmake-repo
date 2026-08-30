#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ServerInstanceGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct ServerInstanceLeaveGameDoneEvent;
struct ServerInstanceRequestResourceReload;
// clang-format on

struct ServerInstanceNotificationEvent : public ::NotificationEventVariant<ServerInstanceGameplayEvent<void>> {};
