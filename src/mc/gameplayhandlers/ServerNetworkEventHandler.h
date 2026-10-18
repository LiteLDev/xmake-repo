#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"

class ServerNetworkEventHandler : public ::GameplayHandler {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ServerNetworkEventHandler inner types define
    using EventTypes = ::entt::type_list<::MutableServerNetworkGameplayEvent<::CoordinatorResult>>;

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::MutableServerNetworkGameplayEvent<CoordinatorResult>&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableServerNetworkGameplayEvent<::CoordinatorResult>& event) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
