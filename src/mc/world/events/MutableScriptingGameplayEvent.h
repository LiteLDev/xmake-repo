#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BeforeWatchdogTerminateEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct MutableScriptingGameplayEvent {};
#else // @header-generator platform
template <typename Result>
struct MutableScriptingGameplayEvent;

template <>
struct MutableScriptingGameplayEvent<CoordinatorResult> : MutableEventVariant<BeforeWatchdogTerminateEvent> {};
#endif // @header-generator platform
