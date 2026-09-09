#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/WildcardCommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class TagCommand : public ::Command {
public:
    // TagCommand inner types define
    enum class Action : uchar {
        Add    = 0,
        Remove = 1,
        List   = 2,
    };

    using ActorRefList = std::vector<std::reference_wrapper<Actor>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TagCommand::Action> mAction;
    ::ll::UntypedStorage<8, 200>                   mSelector;
    ::ll::TypedStorage<8, 24, std::string>         mTagString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TagCommand();

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
