#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ScriptCommandMessageEvent.h"
#include "mc/world/events/ScriptModuleShutdownEvent.h"
#include "mc/world/events/ScriptModuleStartupEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct ScriptingGameplayEvent {};
#else // @header-generator platform
template <typename Result>
struct ScriptingGameplayEvent;

template <>
struct ScriptingGameplayEvent<CoordinatorResult>
: ConstEventVariant<ScriptCommandMessageEvent, ScriptModuleStartupEvent, ScriptModuleShutdownEvent> {
    using ConstEventVariant<ScriptCommandMessageEvent, ScriptModuleStartupEvent, ScriptModuleShutdownEvent>::
        ConstEventVariant;
};
#endif // @header-generator platform
