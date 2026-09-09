#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InputEntry.h"

struct ServerScriptInputPacketQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::deque<InputEntry>> mQueuedUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptInputPacketQueueComponent& operator=(ServerScriptInputPacketQueueComponent const&);
};
