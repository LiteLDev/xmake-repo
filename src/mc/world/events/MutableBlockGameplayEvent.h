#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/BlockTryDestroyByPlayerEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ExplosionStartedEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutableBlockGameplayEvent {};
#else // @header-generator platform
template <typename Result>
struct MutableBlockGameplayEvent;

template <>
struct MutableBlockGameplayEvent<CoordinatorResult>
: MutableEventVariant<ExplosionStartedEvent, BlockTryDestroyByPlayerEvent> {};
#endif // @header-generator platform
