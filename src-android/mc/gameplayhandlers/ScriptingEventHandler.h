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
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ScriptingGameplayEvent<CoordinatorResult> const&) = 0;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableScriptingGameplayEvent<CoordinatorResult>&) = 0;
    // clang-format on
    // NOLINTEND
};
