#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<AgentCommands::Command>> mCurrentCommand;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentCommandComponent& operator=(AgentCommandComponent const&);
    AgentCommandComponent(AgentCommandComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AgentCommandComponent();

    MCNAPI bool addCommand(std::unique_ptr<AgentCommands::Command>);

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void setCurrentCommand(std::unique_ptr<AgentCommands::Command>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
