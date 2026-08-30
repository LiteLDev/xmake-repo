#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

namespace AgentComponents::Actions {

struct Till {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
    ::ll::TypedStorage<8, 24, std::string>                 item;
    // NOLINTEND

public:
    // prevent constructor by default
    Till();
};

} // namespace AgentComponents::Actions
