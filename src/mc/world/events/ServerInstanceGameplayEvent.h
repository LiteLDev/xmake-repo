#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ServerInstanceLeaveGameDoneEvent.h"
#include "mc/world/events/ServerInstanceRequestResourceReload.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct ServerInstanceGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct ServerInstanceGameplayEvent;

template <>
struct ServerInstanceGameplayEvent<void>
: ConstEventVariant<ServerInstanceLeaveGameDoneEvent, ServerInstanceRequestResourceReload> {};

struct ServerInstanceNotificationEvent;
#endif // @header-generator platform
