#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/actor/agent/agent_components/CollectionSpecification.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace AgentCommands {

class CollectCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                        mItemId;
    ::ll::TypedStorage<1, 1, ::AgentComponents::CollectionSpecification> mCollecting;
    ::ll::TypedStorage<1, 1, bool>                                       mDone;
    // NOLINTEND

public:
    // prevent constructor by default
    CollectCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CollectCommand();

    virtual void execute();

    virtual bool isDone();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute();

    MCNAPI bool $isDone();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
