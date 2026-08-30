#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ErrorPathStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<std::string>&> mErrorPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorPathStack& operator=(ErrorPathStack const&);
    ErrorPathStack(ErrorPathStack const&);
    ErrorPathStack();
};
