#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

class LevelGameplayHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelGameplayHandler() = default;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableLevelGameplayEvent<CoordinatorResult>&) = 0;

    virtual ::HandlerResult handleEvent(::LevelGameplayEvent<void> const&) = 0;
    // clang-format on
    // NOLINTEND
};
