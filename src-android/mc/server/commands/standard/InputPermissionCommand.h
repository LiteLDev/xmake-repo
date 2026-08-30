#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class InputPermissionCommand : public ::Command {
public:
    // InputPermissionCommand inner types define
    enum class CommandActionType : int {
        Set   = 0,
        Query = 1,
    };

    enum class CommandValueType : int {
        Undefined = 0,
        Enabled   = 1,
        Disabled  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputPermissionCommand::CommandActionType> mActionType;
    ::ll::UntypedStorage<8, 200>                                          mTargets;
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory>                   mPermission;
    ::ll::TypedStorage<4, 4, ::InputPermissionCommand::CommandValueType>  mValueType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputPermissionCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& QUERY_OPTION();

    MCNAPI static char const* const& SET_OPTION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
