#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> text;
    ::ll::TypedStorage<4, 4, int>          controllerId;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInput& operator=(TextInput const&);
    TextInput();
};
