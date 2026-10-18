#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

class ScriptingEventHandler : public ::GameplayHandler {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptingEventHandler inner types define
    using EventTypes = ::entt::type_list<
        ::MutableScriptingGameplayEvent<::CoordinatorResult>,
        ::ScriptingGameplayEvent<::CoordinatorResult> const>;

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ScriptingGameplayEvent<CoordinatorResult> const&) = 0;
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableScriptingGameplayEvent<::CoordinatorResult>&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableScriptingGameplayEvent<CoordinatorResult>&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptingGameplayEvent<::CoordinatorResult> const&) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
