#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace AgentCommands {

class TransferToCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSrcSlot;
    ::ll::TypedStorage<4, 4, int> mQuantity;
    ::ll::TypedStorage<4, 4, int> mDestSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferToCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransferToCommand();

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
