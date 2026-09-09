#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionValue.h"
#include "mc/world/actor/npc/Button.h"
#include "mc/world/actor/npc/StoredCommand.h"
#include "mc/world/actor/npc/action_mode/Enum.h"

namespace npc {

struct CommandAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::npc::ActionValue>              action;
    ::ll::TypedStorage<8, 48, ::npc::Button>                   button;
    ::ll::TypedStorage<1, 1, ::npc::_ActionMode::Enum>         mode;
    ::ll::TypedStorage<8, 24, std::vector<npc::StoredCommand>> commands;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandAction& operator=(CommandAction const&);
    CommandAction(CommandAction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator!=(::npc::CommandAction const&) const;

    MCNAPI bool operator==(::npc::CommandAction const&) const;

    MCNAPI ~CommandAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
