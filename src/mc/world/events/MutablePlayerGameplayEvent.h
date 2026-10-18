#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/PlayerGameModeChangeEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutablePlayerGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct MutablePlayerGameplayEvent;
template <>
struct MutablePlayerGameplayEvent<CoordinatorResult> : MutableEventVariant<PlayerGameModeChangeEvent> {};
#endif // @header-generator platform
