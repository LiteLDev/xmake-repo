#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent_components/actions/QueueItem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class ActionQueue {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, std::queue<AgentComponents::Actions::QueueItem, std::deque<AgentComponents::Actions::QueueItem>>> mQueue;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AgentComponents::Actions::QueueItem pop();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void schedule(::EntityContext&, ::AgentComponents::Actions::QueueItem);

    MCNAPI static void tryStartNext(::EntityContext&);
    // NOLINTEND
};

} // namespace AgentComponents
