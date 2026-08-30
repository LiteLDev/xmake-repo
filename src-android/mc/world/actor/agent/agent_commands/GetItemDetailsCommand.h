#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    GetItemDetailsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GetItemDetailsCommand();

    virtual void execute();

    virtual bool isDone();

    virtual void fireCommandDoneEvent();
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

    MCNAPI void $fireCommandDoneEvent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
