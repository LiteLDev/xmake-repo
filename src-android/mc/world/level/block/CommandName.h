#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<1, 1, bool>         showInAutoComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandName& operator=(CommandName const&);
    CommandName(CommandName const&);
    CommandName();
};
