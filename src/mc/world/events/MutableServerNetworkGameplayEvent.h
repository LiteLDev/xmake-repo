#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ChatEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/IncomingPacketEvent.h"
#include "mc/world/events/OutgoingPacketEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutableServerNetworkGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct MutableServerNetworkGameplayEvent;

template <>
struct MutableServerNetworkGameplayEvent<CoordinatorResult>
: MutableEventVariant<ChatEvent, IncomingPacketEvent, OutgoingPacketEvent> {};
#endif // @header-generator platform no-eol
