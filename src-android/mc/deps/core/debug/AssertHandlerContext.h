#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> description;
    ::ll::TypedStorage<8, 24, std::string> unformattedMessage;
    ::ll::TypedStorage<8, 24, std::string> arg;
    ::ll::TypedStorage<4, 4, int>          line;
    ::ll::TypedStorage<8, 24, std::string> file;
    ::ll::TypedStorage<8, 24, std::string> function;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AssertHandlerContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
