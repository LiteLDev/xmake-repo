#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ClientInstanceGameplayEvent.h"

class ClientInstanceEventHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HandlerResult handleEvent(::ClientInstanceGameplayEvent<void> const&) = 0;
    // NOLINTEND
};
