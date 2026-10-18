#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/agent_components/actions/QueueItem.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace AgentComponents::Actions { struct QueueItem; }
#endif // @header-generator platform
// clang-format on

namespace AgentComponents {

class ActionQueue {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ActionQueue inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // ActionQueue inner types define
    class Definition {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 48, std::queue<AgentComponents::Actions::QueueItem, std::deque<AgentComponents::Actions::QueueItem>>> mQueue;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk56b053;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActionQueue(ActionQueue const&);
    ActionQueue();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AgentComponents::Actions::QueueItem pop();
#else // @header-generator platform
    MCAPI ::AgentComponents::Actions::QueueItem pop();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void schedule(::EntityContext&, ::AgentComponents::Actions::QueueItem);
#else // @header-generator platform
    MCAPI static void schedule(::EntityContext& entity, ::AgentComponents::Actions::QueueItem item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void tryStartNext(::EntityContext&);
#else // @header-generator platform
    MCAPI static void tryStartNext(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace AgentComponents
