#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LessonAction.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/edu/LessonActionType.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class LessonCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                 mTargets;
    ::ll::TypedStorage<1, 1, ::LessonActionType> mActionType;
    ::ll::TypedStorage<1, 1, ::LessonAction>     mAction;
    ::ll::TypedStorage<8, 24, std::string>       mActivityId;
    ::ll::TypedStorage<4, 4, int>                mScore;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LessonCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
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
