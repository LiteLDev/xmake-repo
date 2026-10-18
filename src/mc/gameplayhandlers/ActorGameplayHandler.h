#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

class ActorGameplayHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorGameplayHandler() = default;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableActorGameplayEvent<CoordinatorResult>&) = 0;

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorGameplayEvent<CoordinatorResult> const&) = 0;

    virtual ::HandlerResult handleEvent(::MutableActorGameplayEvent<void>&) = 0;
#else // @header-generator platform
    virtual ~ActorGameplayHandler() /*override*/ = default;
#endif // @header-generator platform

    virtual ::HandlerResult handleEvent(::ActorGameplayEvent<void> const&) = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ::HandlerResult handleEvent(::MutableActorGameplayEvent<void>& event) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorGameplayEvent<::CoordinatorResult> const&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableActorGameplayEvent<::CoordinatorResult>& event) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
