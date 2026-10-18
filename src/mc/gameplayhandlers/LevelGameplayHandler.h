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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelGameplayHandler() = default;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableLevelGameplayEvent<CoordinatorResult>&) = 0;
#else // @header-generator platform
    virtual ~LevelGameplayHandler() /*override*/ = default;
#endif // @header-generator platform

    virtual ::HandlerResult handleEvent(::LevelGameplayEvent<void> const&) = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableLevelGameplayEvent<::CoordinatorResult>& event) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
