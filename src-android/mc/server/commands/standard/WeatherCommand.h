#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class WeatherCommand : public ::Command {
public:
    // WeatherCommand inner types define
    enum class WeatherRequest : int {
        Set   = 0,
        Query = 1,
    };

    enum class WeatherType : int {
        Clear   = 0,
        Rain    = 1,
        Thunder = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WeatherCommand::WeatherRequest> mRequest;
    ::ll::TypedStorage<4, 4, ::WeatherCommand::WeatherType>    mType;
    ::ll::TypedStorage<4, 4, int>                              mDuration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeatherCommand();

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
