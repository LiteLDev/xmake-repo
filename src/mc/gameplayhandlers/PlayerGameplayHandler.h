#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

class PlayerGameplayHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutablePlayerGameplayEvent<CoordinatorResult>&) = 0;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::PlayerGameplayEvent<CoordinatorResult> const&) = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::HandlerResult handleEvent(::PlayerGameplayEvent<void> const&) = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const& event) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>& event) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
