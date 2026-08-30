#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class WorldClockRegistry;
// clang-format on

class TimeCommand : public ::Command {
public:
    // TimeCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // TimeCommand inner types define
    enum class Mode : int {
        Set   = 0,
        Add   = 1,
        Query = 2,
    };

    enum class Query : int {
        DayTime  = 0,
        GameTime = 1,
        Day      = 2,
    };

    enum class TimeSpec : int {
        Sunrise     = 0,
        Day         = 1,
        Noon        = 2,
        Sunset      = 3,
        Night       = 4,
        Midnight    = 5,
        Unspecified = 6,
    };

    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mWorldClockRegistry;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit InitProxy(::Level const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Level const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TimeCommand::Mode>     mMode;
    ::ll::TypedStorage<4, 4, ::TimeCommand::Query>    mQuery;
    ::ll::TypedStorage<4, 4, ::TimeCommand::TimeSpec> mSpec;
    ::ll::TypedStorage<4, 4, int>                     mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TimeCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, ::TimeCommand::InitProxy&&);
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
