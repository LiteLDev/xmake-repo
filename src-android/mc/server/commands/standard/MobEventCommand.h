#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MobEvents;
class ServerLevel;
// clang-format on

class MobEventCommand : public ::Command {
public:
    // MobEventCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // MobEventCommand inner types define
    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::MobEvents&> mMobEvents;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit InitProxy(::ServerLevel&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ServerLevel&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMobEventName;
    ::ll::TypedStorage<1, 1, bool>         mValue;
    ::ll::TypedStorage<1, 1, bool>         mValueWasSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEventCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, ::MobEventCommand::InitProxy&&);
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
