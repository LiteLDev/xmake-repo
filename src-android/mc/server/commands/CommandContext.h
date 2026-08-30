#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class CommandContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mCommand;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
    ::ll::TypedStorage<4, 4, int>                            mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CommandOrigin const& getCommandOrigin() const;

    MCNAPI ~CommandContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
