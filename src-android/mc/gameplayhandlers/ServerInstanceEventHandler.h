#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

class ServerInstanceEventHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventHandler() = default;

    virtual ::HandlerResult handleEvent(::ServerInstanceGameplayEvent<void> const&) = 0;
    // NOLINTEND
};
