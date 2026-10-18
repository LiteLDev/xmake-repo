#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LevelWeatherChangedEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutableLevelGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct MutableLevelGameplayEvent;

template <>
struct MutableLevelGameplayEvent<CoordinatorResult> : MutableEventVariant<LevelWeatherChangedEvent> {};
#endif // @header-generator platform
