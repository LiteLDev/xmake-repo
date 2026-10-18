#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

class ServerInstanceEventHandler : public ::GameplayHandler {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ServerInstanceEventHandler inner types define
    using EventTypes = ::entt::type_list<::ServerInstanceGameplayEvent<void> const>;

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerInstanceEventHandler() = default;
#else // @header-generator platform
    virtual ~ServerInstanceEventHandler() /*override*/ = default;
#endif // @header-generator platform

    virtual ::HandlerResult handleEvent(::ServerInstanceGameplayEvent<void> const&) = 0;
    // NOLINTEND
};
