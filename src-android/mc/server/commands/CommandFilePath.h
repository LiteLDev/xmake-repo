#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandFilePath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
