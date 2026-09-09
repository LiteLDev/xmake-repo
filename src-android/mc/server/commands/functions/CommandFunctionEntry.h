#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
// clang-format on

class CommandFunctionEntry : public ::IFunctionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>> mCommand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandFunctionEntry();

    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
