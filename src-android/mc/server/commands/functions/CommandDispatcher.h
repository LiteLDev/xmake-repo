#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/ICommandDispatcher.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class CommandDispatcher : public ::ICommandDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandDispatcher();

    virtual int performCommand(::CommandOrigin const&, ::Command&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandDispatcher();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $performCommand(::CommandOrigin const&, ::Command&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
