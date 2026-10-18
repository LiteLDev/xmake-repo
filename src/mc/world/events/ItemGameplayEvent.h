#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/CraftUpdateResultItemClientEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ShapedRecipeTriggeredEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct ItemGameplayEvent {};
#else // @header-generator platform
template <typename Return>
struct ItemGameplayEvent;

template <>
struct ItemGameplayEvent<void> : ConstEventVariant<ShapedRecipeTriggeredEvent, CraftUpdateResultItemClientEvent> {};
#endif // @header-generator platform
